/*
 * main.c
 *
 *  Created on: Mar 3, 2023
 *      Author: Ali Mohamed
 */

#include "DIO_Interface.h"
#include "Timer_Interface.h"
#include "UART_Interface.h"






#define NUM_OF_WAVES  3


void A_Main_PWMDrawer(u8, u8);

int main()
{
	M_UART_Void_UARTInit();
	M_Timer_Void_PWMInit(TIMER0_CHANNEL);
	M_DIO_Void_SetPinDirection(PA0_PIN, OUTPUT);
	u8 Local_U8_MyDutyCycle = 20;
	while(1)
	{
		A_Main_PWMDrawer(Local_U8_MyDutyCycle, NUM_OF_WAVES);
	}
}


void A_Main_PWMDrawer(u8 Copy_U8_MyDutyCycle, u8 Copy_U8_NumOfWaves)
{
	while(M_UART_Void_UARTRec() != 1);
	M_DIO_Void_SetPinValue(PA0_PIN, HIGH);
	M_Timer_Void_PWMSetDutyCycle(TIMER0_CHANNEL, Copy_U8_MyDutyCycle);
	M_Timer_Void_PWMStart(TIMER0_CHANNEL);
	M_UART_Void_UARTSend(Copy_U8_MyDutyCycle);
	while(M_UART_Void_UARTRec() != 2);
	M_UART_Void_UARTSend(Copy_U8_NumOfWaves);
	while(M_UART_Void_UARTRec() != 3);
	M_DIO_Void_SetPinValue(PA0_PIN, LOW);
	M_Timer_Void_PWMStop(TIMER0_CHANNEL);
}
