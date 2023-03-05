/*
 * Timer_Config.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef MCAL_TIMER_TIMER_CONFIG_H_
#define MCAL_TIMER_TIMER_CONFIG_H_

/*
 * TIMER0_MODE OPTIONS : 1 - NORMAL_MODE
 * 						 2 - CTC_MODE
 * 						 3 - FAST_PWM_MODE
 * 						 4 - PHASE_CORRECT_PWM_MODE
 */
#define TIMER0_MODE          FAST_PWM_MODE
/*
 * SELECT f_OSC IN MHZ
 */
#define F_OSC                      16
/*
 * TIMER0_PRESCALER_DF OPTIONS : [ 1024 , 256 ]
 */
#define TIMER0_PRESCALER_DF        1024
/*
 * TIMER0_FAST_PWM_MODE OPTIONS : [ NON_INVERTED , INVERTED ]
 */
#define TIMER0_FAST_PWM_MODE      NON_INVERTED

/*
 * SELECT F_PWM1 IN HZ
 */
#define F_PWM1                    60
/*
 * TIMER1_PRESCALER_DF OPTIONS : [ 1024 , 256 ]
 */
#define TIMER1_PRESCALER_DF      1024

#endif /* MCAL_TIMER_TIMER_CONFIG_H_ */
