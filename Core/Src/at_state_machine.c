/*
 * at_state_machine.c
 *
 *  Created on: Dec 8, 2021
 *      Author: tom_h
 */

#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <string.h>
#include <stdio.h>
#include <stdbool.h>


typedef enum
{
	AT_STATE_INITAL = 0,
	AT_STATE_1,
	AT_STATE_2,
	AT_STATE_3
} at_state_et;

typedef struct
{
	at_state_et   state;
	char txt[80];
	UART_HandleTypeDef *phuart;
} at_ctrl_st;

at_ctrl_st  at_ctrl;

void at_sm_initialize(UART_HandleTypeDef *uart_ptr)
{
	memset(&at_ctrl,0x00, sizeof(at_ctrl));
	at_ctrl.phuart = uart_ptr;
}


/// @brief  at command state machine
void at_sm_main(void)
{

	switch(at_ctrl.state)
	{
	case AT_STATE_INITAL:
		sprintf(at_ctrl.txt,"AT\r\n");
	  	HAL_UART_Transmit(at_ctrl.phuart, (uint8_t*)at_ctrl.txt, strlen(at_ctrl.txt),HAL_MAX_DELAY);
		break;
	case AT_STATE_1:
		break;
	case AT_STATE_2:
		break;
	case AT_STATE_3:
		break;
	}
}
