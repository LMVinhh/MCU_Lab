/*
 * traffic.c
 *
 *  Created on: Nov 11, 2022
 *      Author: ASUS
 */


#include "traffic.h"
#include "fsm_automatic.h"
void traffic_run(){
	  if(isButton1Pressed()==1){
		  mode++;
	  }
	  if(mode > 4)mode = 0;
	switch (mode){
		  case 0:
			  yellow1(0);yellow2(0);
			  green1(0);green2(0);
			  red1(0);red2(0);
			  led_buffer[2] = mode;
			  break;
		  case 1:
			  if(flag_yellow == 1 && flag_green == 1 && flag_red == 1){
				  if(timer2_flag == 1){
					  count1--;
					  count2--;
					  setTimer2(100);

				  }
				  led_buffer[0] = count1%10;
				  led_buffer[1] = count1/10;
				  led_buffer[2] = count2%10;
				  led_buffer[3] = count2/10;
			  	  fsm_automatic_run1();
			  	  fsm_automatic_run2();

			  }

			  break;
		  case 2:
			  yellow1(0);yellow2(0);
			  green1(0);green2(0);
			  led_set = set_red/100;
			  process_red();
			  led_buffer[0] = led_set %10;
			  led_buffer[1] = (led_set/10);
			  led_buffer[2] = mode;
			  led_buffer[3] = 0;
			  break;
		  case 4:
			  yellow1(0);yellow2(0);
			  red1(0);red2(0);
			  led_set = set_green/100;
			  process_green();
			  led_buffer[0] = led_set%10;
			  led_buffer[1] = (led_set/10);
			  led_buffer[2] = mode;
			  led_buffer[3] = 0;

			  break;
		  case 3:
			  red1(0);red2(0);
			  green1(0);green2(0);
			  led_set = set_yellow/100;
			  process_yellow();
			  led_buffer[0] = led_set%10;
			  led_buffer[1] = (led_set/10);
			  led_buffer[2] = mode;
			  led_buffer[3] = 0;
			  break;
		  default:
			  break;
		  }
}
