/*
 * control_traffic.c
 *
 *  Created on: Nov 28, 2024
 *      Author: Hy
 */

#include "control_traffic.h"

int status_RED_A = 1;
int status_GREEN_A = 0;
int status_YELLOW_A = 0;

int status_RED_B = 0;
int status_GREEN_B = 1;
int status_YELLOW_B = 0;

void displayTraffic() {
	//group a
	if (status_RED_A == 1) {
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	}
	if (status_YELLOW_A == 1) {
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	}
	if (status_GREEN_A == 1) {
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	}
	//group b
	if (status_RED_B == 1) {
		HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, SET);
		HAL_GPIO_WritePin(D8_GPIO_Port, D8_Pin, SET);
	}
	if (status_YELLOW_B == 1) {
		HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, RESET);
		HAL_GPIO_WritePin(D8_GPIO_Port, D8_Pin, SET);
	}
	if (status_GREEN_B == 1) {
		HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, SET);
		HAL_GPIO_WritePin(D8_GPIO_Port, D8_Pin, RESET);
	}
}

void statusTraffic() {
	switch (statusLED) {
	// SETTING
	case MODE2:
		status_RED_A = 1;
		status_GREEN_A = 0;
		status_YELLOW_A = 0;

		status_RED_B = 1;
		status_GREEN_B = 0;
		status_YELLOW_B = 0;
		break;
	case MODE3:
		status_RED_A = 0;
		status_GREEN_A = 0;
		status_YELLOW_A = 1;

		status_RED_B = 0;
		status_GREEN_B = 0;
		status_YELLOW_B = 1;
		break;
	case MODE4:
		status_RED_A = 0;
		status_GREEN_A = 1;
		status_YELLOW_A = 0;

		status_RED_B = 0;
		status_GREEN_B = 1;
		status_YELLOW_B = 0;
		break;
		//AUTOMATIC
	case RED_GREEN:
		status_RED_A = 1;
		status_GREEN_A = 0;
		status_YELLOW_A = 0;

		status_RED_B = 0;
		status_GREEN_B = 1;
		status_YELLOW_B = 0;
		break;
	case RED_YELLOW:
		status_RED_A = 1;
		status_GREEN_A = 0;
		status_YELLOW_A = 0;

		status_RED_B = 0;
		status_GREEN_B = 0;
		status_YELLOW_B = 1;
		break;
	case GREEN_RED:
		status_RED_A = 0;
		status_GREEN_A = 1;
		status_YELLOW_A = 0;

		status_RED_B = 1;
		status_GREEN_B = 0;
		status_YELLOW_B = 0;
		break;
	case YELLOW_RED:
		status_RED_A = 0;
		status_GREEN_A = 0;
		status_YELLOW_A = 1;

		status_RED_B = 1;
		status_GREEN_B = 0;
		status_YELLOW_B = 0;
		break;
		//MANUAL
	case MAN_RED_GREEN:
		status_RED_A = 1;
		status_GREEN_A = 0;
		status_YELLOW_A = 0;

		status_RED_B = 0;
		status_GREEN_B = 1;
		status_YELLOW_B = 0;
		break;
	case MAN_RED_YELLOW:
		status_RED_A = 1;
		status_GREEN_A = 0;
		status_YELLOW_A = 0;

		status_RED_B = 0;
		status_GREEN_B = 0;
		status_YELLOW_B = 1;
		break;
	case MAN_GREEN_RED:
		status_RED_A = 0;
		status_GREEN_A = 1;
		status_YELLOW_A = 0;

		status_RED_B = 1;
		status_GREEN_B = 0;
		status_YELLOW_B = 0;
		break;
	case MAN_YELLOW_RED:
		status_RED_A = 0;
		status_GREEN_A = 0;
		status_YELLOW_A = 1;

		status_RED_B = 1;
		status_GREEN_B = 0;
		status_YELLOW_B = 0;
		break;
	default:
		break;
	}

}
