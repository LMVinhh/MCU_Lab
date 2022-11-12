/*
 * global.h
 *
 *  Created on: Nov 1, 2022
 *      Author: ASUS
 */
#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "ledStatus.h"
#include "SEVEN_SEGMENT.h"
#include "process.h"
#include "scanLed.h"
#include "traffic.h"

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#define Buttons 3

#define INIT 1
#define AUTO_RED  2
#define AUTO_YELLOW  3
#define AUTO_GREEN  4


#define MAN_RED 10
#define MAN_GREEN 11
#define MAN_YELLOW 12

extern int index_led;
extern int status1;
extern int status2;
extern int mode;

#endif /* INC_GLOBAL_H_ */
