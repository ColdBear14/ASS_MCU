/*
 * fsm_manual.c
 *
 *  Created on: Dec 6, 2024
 *      Author: Hy
 */

#include "fsm_manual.h"

void fsm_manual(){
	switch(statusLED){
	case MAN_RED_GREEN:
		if(IsButtonPress(1) == 1){
			statusLED = MAN_RED_YELLOW;
		}
		if(IsButtonLongPress(2) == 1){
			statusLED = RED_GREEN;
			countDownLEDA = count_RED;
			countDownLEDB = count_GREEN;
		}
		displayTraffic();
		break;
	case MAN_RED_YELLOW:
		if(IsButtonPress(1) == 1){
			statusLED = MAN_GREEN_RED;
		}
		if(IsButtonLongPress(2) == 1){
			statusLED = RED_YELLOW;
			countDownLEDA = count_YELLOW;
			countDownLEDB = count_YELLOW;
		}
		displayTraffic();

		break;
	case MAN_GREEN_RED:
		if(IsButtonPress(1) == 1){
			statusLED = MAN_YELLOW_RED;
		}
		if(IsButtonLongPress(2) == 1){
			statusLED = GREEN_RED;
			countDownLEDA = count_GREEN;
			countDownLEDB = count_RED;
		}
		displayTraffic();

		break;
	case MAN_YELLOW_RED:
		if(IsButtonPress(1) == 1){
			statusLED = MAN_RED_GREEN;
		}
		if(IsButtonLongPress(2) == 1){
			statusLED = YELLOW_RED;
			countDownLEDA = count_YELLOW;
			countDownLEDB = count_YELLOW;
		}
		displayTraffic();

		break;
	}
}
