/*
 * global.h
 *
 *  Created on: Nov 28, 2024
 *      Author: Hy
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#define INIT 0
#define MODE1 1
#define MODE2 2
#define MODE3 3
#define MODE4 4


#define RED_GREEN 11
#define RED_YELLOW 12
#define GREEN_RED 13
#define YELLOW_RED 14

#define MAN_RED_GREEN 21
#define MAN_RED_YELLOW 22
#define MAN_GREEN_RED 23
#define MAN_YELLOW_RED 24

int statusLED;
extern int status_mode;

#endif /* INC_GLOBAL_H_ */
