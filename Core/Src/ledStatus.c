/*
 * ledStatus.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ASUS
 */


#include "ledStatus.h"
void red1(int status){
	if(status == 1)	HAL_GPIO_WritePin(GPIOA,LED_RED1_Pin,RESET);
	if(status == 0)	HAL_GPIO_WritePin(GPIOA,LED_RED1_Pin,SET);

}
void green1(int status){
	if(status == 1)	HAL_GPIO_WritePin(GPIOA,LED_GREEN1_Pin,RESET);
	if(status == 0)	HAL_GPIO_WritePin(GPIOA,LED_GREEN1_Pin,SET);
}
void yellow1(int status){
	if(status == 1)	HAL_GPIO_WritePin(GPIOA,LED_YELLOW1_Pin,RESET);
	if(status == 0)	HAL_GPIO_WritePin(GPIOA,LED_YELLOW1_Pin,SET);
}
void red2(int status){
	if(status == 1)	HAL_GPIO_WritePin(GPIOA,LED_RED2_Pin,RESET);
	if(status == 0)	HAL_GPIO_WritePin(GPIOA,LED_RED2_Pin,SET);
}
void green2(int status){
	if(status == 1)	HAL_GPIO_WritePin(GPIOA,LED_GREEN2_Pin,RESET);
	if(status == 0)	HAL_GPIO_WritePin(GPIOA,LED_GREEN2_Pin,SET);
}
void yellow2(int status){
	if(status == 1)	HAL_GPIO_WritePin(GPIOA,LED_YELLOW2_Pin,RESET);
	if(status == 0)	HAL_GPIO_WritePin(GPIOA,LED_YELLOW2_Pin,SET);
}
