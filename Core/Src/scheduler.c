/*
 * scheduler.c
 *
 *  Created on: Dec 7, 2022
 *      Author: ASUS
 */

#include "scheduler.h"
sTask SCH_tasks_G[SCH_MAX_TASKS];
uint8_t current_index_task = 0;
void SCH_Init ( void ) {
 unsigned char i ;
 for ( i = 0 ; i < SCH_MAX_TASKS ; i ++) {
 SCH_Delete_Task ( i ) ;
}

}

unsigned char SCH_Add_Task( void (*pFunction )() , unsigned int DELAY, unsigned int PERIOD)
 {
 unsigned char Index = 0 ;
 // F i r s t find a gap in the array ( i f there i s one )
 while ( ( SCH_tasks_G [ Index ] . pTask != 0) && ( Index <SCH_MAX_TASKS) )
{
 Index ++;
 }
 // Have we reached the end of the l i s t ?
 if ( Index == SCH_MAX_TASKS)
 {
 // Task l i s t i s f u l l
 // Set the global error v a ri abl e
	 // Also return an error code
 return SCH_MAX_TASKS ;
 }
 // I f we ’ re here , there i s a space in the ta sk array
 SCH_tasks_G [ Index ] . pTask = pFunction ;
 SCH_tasks_G [ Index ] . Delay = DELAY ;
 SCH_tasks_G [ Index ] . Period = PERIOD ;
 SCH_tasks_G [ Index ] .RunMe = 0 ;

 // return po sition of ta sk ( to allow l a t e r deletion )
 return Index ;
 }


void SCH_Update( void ) {
 unsigned char Index ;
// NOTE: c al cul ation s are in *TICKS * ( not milli second s )
 for ( Index = 0 ; Index < SCH_MAX_TASKS ; Index ++) {
 // Check i f there i s a ta sk at t h i s location
 if ( SCH_tasks_G [Index].pTask ) {
 if ( SCH_tasks_G [Index].Delay == 0) {
 // The ta sk i s due to run
 // Inc . the ’RunMe ’ f l a g
 SCH_tasks_G [ Index ].RunMe += 1 ;
 if ( SCH_tasks_G [ Index ].Period ) {
  // Schedule periodic ta sk s to run again
  SCH_tasks_G [ Index ].Delay = SCH_tasks_G [Index].Period ;
  }
  }
 else {
  // Not yet ready to run : j u st decrement the delay
	 SCH_tasks_G[Index].Delay -= 1 ;;
  }
 }
 }
}

void SCH_Dispatch_Tasks ( void )
 {
 unsigned char Index ;
 // Dispatches ( runs ) the next ta sk ( i f one i s ready )
 for ( Index = 0 ; Index < SCH_MAX_TASKS ; Index ++) {
 if ( SCH_tasks_G [ Index ] .RunMe > 0) {
 (  *SCH_tasks_G [ Index ] . pTask ) ( ) ; // Run the ta sk
 SCH_tasks_G [ Index ] .RunMe -= 1 ; // Reset / reduce RunMe flag
  // Periodic ta sk s w i l l automatically run again
  // − i f t h i s i s a ’one shot ’ task , remove i t from thearray
  if ( SCH_tasks_G [ Index ] . Period == 0)
  {
  SCH_Delete_Task ( Index ) ;
  }
  }
  }
  // Report system statu s

  }




 void SCH_Delete_Task (uint32_t TASK_INDEX) {

 SCH_tasks_G [TASK_INDEX ] . pTask = 0x0000 ;
 SCH_tasks_G [TASK_INDEX ] . Delay = 0 ;
 SCH_tasks_G [TASK_INDEX ] . Period = 0 ;
 SCH_tasks_G [TASK_INDEX ] .RunMe = 0 ;
 }



