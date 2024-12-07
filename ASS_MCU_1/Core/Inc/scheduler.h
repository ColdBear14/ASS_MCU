/*
 * scheduler.h
 *
 *  Created on: Dec 6, 2024
 *      Author: Hy
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "stdint.h"
#include "main.h"

#define SCH_MAX_TASKS 	10
#define	NO_TASK_ID		0

typedef struct {
	void ( * pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
	uint32_t TaskID;
} sTask;

void SCH_Init();
void SCH_Update();
void SCH_Add_Task(void (*p_function)(), uint32_t, uint32_t);
void SCH_Dispatch_Tasks();
void SCH_Delete_Task(uint32_t);

#endif /* INC_SCHEDULER_H_ */
