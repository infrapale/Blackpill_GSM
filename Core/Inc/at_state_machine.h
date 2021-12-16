/*
 * at_state_machine.h
 *
 *  Created on: Dec 9, 2021
 *      Author: tom_h
 */

#ifndef AT_STATE_MACHINE_H_
#define AT_STATE_MACHINE_H_

void at_sm_initialize(UART_HandleTypeDef *uart_ptr);
void at_sm_main(void);

#endif /* AT_STATE_MACHINE_H_ */
