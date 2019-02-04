/*
 * main.c
 *
 *  Created on: Feb 2, 2019
 *      Author: Kamel
 */
#include "avr/io.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_int.h"
#include "GIE_int.h"
#include "EXTI_int.h"
#include "LED_int.h"
#include "avr/delay.h"
void lightLed(void);
u8 flag=0;
main(void){
	DiO_voidInitialize();
	EXTI_voidInitialize();
	GIE_voidEnable();
	EXTI_voidEnableInt0();
	EXTI_voidSetInt0CallBack(lightLed);
	while(1){
		if(flag==0){
		DIO_voidSetPinValue(DIO_u8_PIN_0, DIO_u8_HIGH);
		_delay_ms(500);
		DIO_voidSetPinValue(DIO_u8_PIN_0, DIO_u8_LOW);
		_delay_ms(500);
		}
	}

}
void lightLed(void){
	//LED_voidSetLedOnWithIndx(LED_u8_INDX_0);
	DIO_voidSetPinValue(DIO_u8_PIN_1, DIO_u8_HIGH);
	//if(DIO_u8GetPinValue(DIO_u8_PIN_26)==DIO_u8_HIGH)
		DIO_voidSetPinValue(DIO_u8_PIN_0,DIO_u8_LOW);
		flag=1;
}
