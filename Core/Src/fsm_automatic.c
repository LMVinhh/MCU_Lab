/*
 * fsm_automatic.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ASUS
 */
#include "fsm_automatic.h"
#include "global.h"
int count1 = 0;
int count2 = 0;
void fsm_automatic_run1(){
	switch (status1){
		case INIT:
			status1 = AUTO_RED;
			setTimer1(1);
			break;
		case AUTO_RED:

			if(timer1_flag == 1){
				status1 = AUTO_GREEN;
				red1(1);green1(0);yellow1(0);
				count1 = set_red/100;
				setTimer1(set_red);
			}
			break;
		case AUTO_GREEN:

			if(timer1_flag == 1){
				status1 = AUTO_YELLOW;
				red1(0);green1(1);yellow1(0);
				count1 = set_green/100;
				setTimer1(set_green);
			}

			break;
		case AUTO_YELLOW:
			if(timer1_flag == 1){
				status1 = AUTO_RED;
				red1(0);green1(0);yellow1(1);
				count1 = set_yellow/100;
				setTimer1(set_yellow);
			}

			break;

		default:
			break;

	}
}
void fsm_automatic_run2(){
	switch (status2){
		case INIT:
			status2 = AUTO_GREEN;
			setTimer4(1);
			break;
		case AUTO_RED:

			if(timer4_flag == 1){
				status2 = AUTO_GREEN;
				red2(1);green2(0);yellow2(0);
				count2 = set_red/100;
				setTimer4(set_red);
			}

			break;
		case AUTO_GREEN:

			if(timer4_flag == 1){
				status2 = AUTO_YELLOW;
				red2(0);green2(1);yellow2(0);
				count2 = set_green/100;
				setTimer4(set_green);
			}

			break;
		case AUTO_YELLOW:
			if(timer4_flag == 1){
				status2 = AUTO_RED;
				red2(0);green2(0);yellow2(1);
				count2 = set_yellow/100;
				setTimer4(set_yellow);
			}

			break;

		default:
			break;

	}
}
