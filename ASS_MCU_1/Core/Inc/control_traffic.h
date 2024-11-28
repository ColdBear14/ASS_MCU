/*
 * control_traffic.h
 *
 *  Created on: Nov 28, 2024
 *      Author: Hy
 */

#ifndef INC_CONTROL_TRAFFIC_H_
#define INC_CONTROL_TRAFFIC_H_

#include "main.h"

int status_RED_A;
int status_GREEN_A;
int status_YELLOW_A;

int status_RED_B;
int status_GREEN_B;
int status_YELLOW_B;

extern void displayTraffic();
void status_LED_A();
void status_LED_B();

#endif /* INC_CONTROL_TRAFFIC_H_ */
