/*
 * fsm_setting.c
 *
 *  Created on: Nov 28, 2024
 *      Author: Hy
 */

#include "fsm_setting.h"

int countTemp = 0 ;

int countDownA;
int countDownB;

int count_RED = 5;
int count_GREEN = 3;
int count_YELLOW = 2;


void fsm_mode(){
	switch(status_mode){
	case INIT:
		status_mode = MODE1;
		countDownA=count_RED;
		countDownB=count_GREEN;
		statusLED = RED_GREEN;
		countDownLEDA=count_RED;
		countDownLEDB=count_GREEN;
		break;
	case MODE1:
		if(IsButtonPress(1) == 1){
			status_mode = MODE2;
		}
		break;
	case MODE2:
		statusLED = MODE2;
		if(IsButtonPress(1) == 1){
			status_mode = MODE3;
		}
		if(IsButtonPress(2) == 1){
			// add value
			countTemp+=1;
		}
		if(IsButtonLongPress(2) == 1){
			// subtract value
			countTemp-=1;
		}
		if(IsButtonPress(3) == 1){
			//set value
			count_RED += countTemp;
			countTemp=0;
		}
		break;
	case MODE3:
		statusLED = MODE3;
		if(IsButtonPress(1) == 1){
			status_mode = MODE4;
		}
		if(IsButtonPress(2) == 1){
			// add value
			countTemp+=1;
		}
		if(IsButtonLongPress(2) == 1){
			// subtract value
			countTemp-=1;
		}
		if(IsButtonPress(3) == 1){
			//set value
			count_YELLOW += countTemp;
			countTemp=0;
		}
		break;
	case MODE4:
		statusLED = MODE4;
		if(IsButtonPress(1) == 1){
			status_mode = MODE1;
		}
		if(IsButtonPress(2) == 1){
			// add value
			countTemp+=1;
		}
		if(IsButtonLongPress(2) == 1){
			// subtract value
			countTemp-=1;
		}
		if(IsButtonPress(3) == 1){
			//set value
			count_GREEN += countTemp;
			countTemp=0;
		}
		break;
	default:
		break;
	}
}
