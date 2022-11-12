/*
 * SEVEN_SEGMENT.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ASUS
 */
#include "SEVEN_SEGMENT.h"

 void display7_seg(int num){
		  // VARIABLES a,b,c,d,e,f,g ARE DEFINED BY THESE SPECIFIC DESCRIPTION ABOVE.
		  // DISLAY NUMBER 0
			if(num == 0){
				HAL_GPIO_WritePin (  a_7SEG_GPIO_Port , a_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( b_7SEG_GPIO_Port , b_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( d_7SEG_GPIO_Port , c_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( c_7SEG_GPIO_Port ,	d_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( e_7SEG_GPIO_Port , e_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( f_7SEG_GPIO_Port , f_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( g_7SEG_GPIO_Port , g_7SEG_Pin ,GPIO_PIN_SET );
			}
			// DISLAY NUMBER 1
			else if(num == 1){
				HAL_GPIO_WritePin ( a_7SEG_GPIO_Port , a_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( b_7SEG_GPIO_Port , b_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( c_7SEG_GPIO_Port , c_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( d_7SEG_GPIO_Port ,	d_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( e_7SEG_GPIO_Port , e_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( f_7SEG_GPIO_Port , f_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( g_7SEG_GPIO_Port , g_7SEG_Pin ,GPIO_PIN_SET );
			}
			// DISLAY NUMBER 2
			else if(num == 2){
					HAL_GPIO_WritePin ( a_7SEG_GPIO_Port , a_7SEG_Pin ,GPIO_PIN_RESET );
					HAL_GPIO_WritePin ( b_7SEG_GPIO_Port , b_7SEG_Pin ,GPIO_PIN_RESET );
					HAL_GPIO_WritePin ( c_7SEG_GPIO_Port , c_7SEG_Pin ,GPIO_PIN_SET );
					HAL_GPIO_WritePin ( d_7SEG_GPIO_Port ,	d_7SEG_Pin ,GPIO_PIN_RESET );
					HAL_GPIO_WritePin ( e_7SEG_GPIO_Port , e_7SEG_Pin ,GPIO_PIN_RESET );
					HAL_GPIO_WritePin ( f_7SEG_GPIO_Port , f_7SEG_Pin ,GPIO_PIN_SET );
					HAL_GPIO_WritePin ( g_7SEG_GPIO_Port , g_7SEG_Pin ,GPIO_PIN_RESET );
				}
		    // DISLAY NUMBER 3
			else if(num == 3){
				HAL_GPIO_WritePin ( a_7SEG_GPIO_Port , a_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( b_7SEG_GPIO_Port , b_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( c_7SEG_GPIO_Port , c_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( d_7SEG_GPIO_Port ,	d_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( e_7SEG_GPIO_Port , e_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( f_7SEG_GPIO_Port , f_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( g_7SEG_GPIO_Port , g_7SEG_Pin ,GPIO_PIN_RESET );
			}
			// DISLAY NUMBER 4
			else if(num == 4){
				HAL_GPIO_WritePin ( a_7SEG_GPIO_Port , a_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( b_7SEG_GPIO_Port , b_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( c_7SEG_GPIO_Port , c_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( d_7SEG_GPIO_Port ,	d_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( e_7SEG_GPIO_Port , e_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( f_7SEG_GPIO_Port , f_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( g_7SEG_GPIO_Port , g_7SEG_Pin ,GPIO_PIN_RESET );
			}
			// DISLAY NUMBER 5
			else if(num == 5){
				HAL_GPIO_WritePin ( a_7SEG_GPIO_Port , a_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( b_7SEG_GPIO_Port , b_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( c_7SEG_GPIO_Port , c_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( d_7SEG_GPIO_Port ,	d_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( e_7SEG_GPIO_Port , e_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( f_7SEG_GPIO_Port , f_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( g_7SEG_GPIO_Port , g_7SEG_Pin ,GPIO_PIN_RESET );
			}
			// DISLAY NUMBER 6
			else if(num == 6){
				HAL_GPIO_WritePin ( a_7SEG_GPIO_Port , a_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( b_7SEG_GPIO_Port , b_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( c_7SEG_GPIO_Port , c_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( d_7SEG_GPIO_Port ,	d_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( e_7SEG_GPIO_Port , e_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( f_7SEG_GPIO_Port , f_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( g_7SEG_GPIO_Port , g_7SEG_Pin ,GPIO_PIN_RESET );
			}
			// DISLAY NUMBER 7
			else if(num == 7){
				HAL_GPIO_WritePin ( a_7SEG_GPIO_Port , a_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( b_7SEG_GPIO_Port , b_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( c_7SEG_GPIO_Port , c_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( d_7SEG_GPIO_Port ,	d_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( e_7SEG_GPIO_Port , e_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( f_7SEG_GPIO_Port , f_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( g_7SEG_GPIO_Port , g_7SEG_Pin ,GPIO_PIN_SET );
			}
			// DISLAY NUMBER 8
			else if(num == 8){
				HAL_GPIO_WritePin ( a_7SEG_GPIO_Port , a_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( b_7SEG_GPIO_Port , b_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( c_7SEG_GPIO_Port , c_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( d_7SEG_GPIO_Port ,	d_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( e_7SEG_GPIO_Port , e_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( f_7SEG_GPIO_Port , f_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( g_7SEG_GPIO_Port , g_7SEG_Pin ,GPIO_PIN_RESET );
			}
			// DISLAY NUMBER 9
			else if(num == 9){
				HAL_GPIO_WritePin ( a_7SEG_GPIO_Port , a_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( b_7SEG_GPIO_Port , b_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( c_7SEG_GPIO_Port , c_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( d_7SEG_GPIO_Port ,	d_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( e_7SEG_GPIO_Port , e_7SEG_Pin ,GPIO_PIN_SET );
				HAL_GPIO_WritePin ( f_7SEG_GPIO_Port , f_7SEG_Pin ,GPIO_PIN_RESET );
				HAL_GPIO_WritePin ( g_7SEG_GPIO_Port , g_7SEG_Pin ,GPIO_PIN_RESET );
			}
	}
