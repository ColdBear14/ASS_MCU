/*
 * timer.h
 *
 *  Created on: Dec 7, 2024
 *      Author: Hy
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "main.h"

extern int timer_flag[10];
extern int timer_counter[10];

void setTimer(int index, int counter);
void timerun();

#endif /* INC_TIMER_H_ */
