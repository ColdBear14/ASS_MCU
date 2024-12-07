/*
 * fsm_automatic.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Hy
 */

#include "fsm_automatic.h"

int countDownLEDA;
int countDownLEDB;

void fsm_automatic(){
	switch (statusLED) {
			case RED_GREEN:
				if(IsButtonPress(2) == 1){
					statusLED = MAN_RED_GREEN;
				}
				if(countDownLEDB <= 0){
					statusLED = RED_YELLOW;
					countDownLEDB = count_YELLOW;
				}
				displayTraffic();
				countDownLEDA--;
				countDownLEDB--;
				break;
			case RED_YELLOW:
				if(IsButtonPress(2) == 1){
					statusLED = MAN_RED_YELLOW;
				}
				if(countDownLEDA <= 0 && countDownLEDB <= 0){
					statusLED = GREEN_RED;
					countDownLEDA = count_GREEN;
					countDownLEDB = count_RED;
				}
				displayTraffic();
				countDownLEDA--;
				countDownLEDB--;
				break;
			case GREEN_RED:
				if(IsButtonPress(2) == 1){
					statusLED = YELLOW_RED;
				}
				if(countDownLEDA <= 0){
					statusLED = YELLOW_RED;
					countDownLEDA = count_YELLOW;
				}
				displayTraffic();
				countDownLEDA--;
				countDownLEDB--;
				break;
			case YELLOW_RED:
				if(IsButtonPress(2) == 1){
					statusLED = MAN_YELLOW_RED;
				}
				if(countDownLEDA <= 0 && countDownLEDB <= 0){
					statusLED = RED_GREEN;
					countDownLEDA = count_RED;
					countDownLEDB = count_GREEN;
				}
				displayTraffic();
				countDownLEDA--;
				countDownLEDB--;
				break;
	default:
		break;
		}
}
