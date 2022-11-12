/*
 * scanLed.c
 *
 *  Created on: Nov 10, 2022
 *      Author: ASUS
 */



#include "scanLed.h"
//int index_led = 0;
int led_buffer[4]  ={1,2,3,4};
	void scan7SEG ( int index ){
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, EN4_Pin, SET);

			switch ( index){
				case 0:
					HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
					// Display the first 7 SEG with led_buffer [0]
					break ;
				case 1:
					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
					// Display the second 7 SEG with led_buffer [1]
					break ;
				case 2:
					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
					// Display the third 7 SEG with led_buffer [2]
					break ;
				case 3:
					HAL_GPIO_WritePin(GPIOA, EN4_Pin, RESET);
					// Display the forth 7 SEG with led_buffer [3]
					break ;
				default :
					break ;
			}
 }
