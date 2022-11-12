/*
 * process.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ASUS
 */


#include "process.h"
 int set_red = 0;
 int set_green = 0;
 int set_yellow = 0;
 int flag_red = 0;
 int flag_yellow = 0;
 int flag_green = 0;
 int led_set = 0;
void process_red(){
	if(isButton2Pressed()==1){
		set_red += 100;
		led_set++;
	}
	if(isButton3Pressed()==1){
		flag_red = 1;
		led_set = 0;
	}
	if(timer3_flag == 1){

	HAL_GPIO_TogglePin(GPIOA, LED_RED1_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_RED2_Pin);
	setTimer3(50);}
}
void process_green(){
	if(isButton2Pressed()==1){
		set_green += 100;

		led_set++;
	}
	if(isButton3Pressed()==1){
		flag_green = 1;
		led_set = 0;

	}
	if(timer3_flag == 1){

	HAL_GPIO_TogglePin(GPIOA, LED_GREEN1_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_GREEN2_Pin);

	setTimer3(50);}

}
void process_yellow(){
	if(isButton2Pressed()==1){
		set_yellow += 100;

		led_set++;

	}
	if(isButton3Pressed()==1){
		flag_yellow = 1;
		led_set = 0;

	}
	if(timer3_flag == 1){
	HAL_GPIO_TogglePin(GPIOA, LED_YELLOW1_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_YELLOW2_Pin);
	setTimer3(50);}
}
