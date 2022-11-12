/*
 * process.h
 *
 *  Created on: Nov 5, 2022
 *      Author: ASUS
 */

#ifndef INC_PROCESS_H_
#define INC_PROCESS_H_
#include "global.h"
extern int led_set;
void process_red();
void process_green();
void process_yellow();
extern int set_red;
extern int set_green;
extern int set_yellow;
extern int flag_red;
extern int flag_yellow;
extern int flag_green;
extern int count2;
extern int count1;
#endif /* INC_PROCESS_H_ */
