/*******************************************/
/* Author : Mario Ramzy 				   */
/* Date : 26/1/2018							*/
/* Version : V01							*/

#include "STD_TYPES.H"
#include "DIO_int.h"
#include "LED_priv.h"
#include "LED_config.h"
#include "LED_int.h"


void LED_voidSetLedOn(void)
{
	if(LED_u8_MODE == LED_u8_NORMAL)
	{
		DIO_voidSetPinValue(LED_u8_DIO_PIN, DIO_u8_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LED_u8_DIO_PIN, DIO_u8_LOW);
	}
}

void LED_voidSetLedOff(void)
{

	/*kda ana fasalt el developer bta3 el app hwa may3rfsh mtwasala normal   */
	/* wla reverse .. hwa hay5tar el mode mn el config normal wla reverse */
	/*	wana ha handle elmode hwa mayfhamsh avr   */
	if(LED_u8_MODE == LED_u8_NORMAL)
	{
		DIO_voidSetPinValue(LED_u8_DIO_PIN, DIO_u8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(LED_u8_DIO_PIN, DIO_u8_HIGH);
	}
}

void LED_voidSetLedOffWithIndx(u8 Copy_u8LedIndx)
{
	if(LED_u8_GET_MODE(Copy_u8LedIndx) == LED_u8_NORMAL)
	{
		DIO_voidSetPinValue(Copy_u8LedIndx, DIO_u8_LOW);
	}
	else
	{
		DIO_voidSetPinValue(Copy_u8LedIndx, DIO_u8_HIGH);
	}
}


void LED_voidSetLedOnWithIndx(u8 Copy_u8LedIndx)
{
	if(LED_u8_GET_MODE(Copy_u8LedIndx) == LED_u8_NORMAL)
	{
		DIO_voidSetPinValue(Copy_u8LedIndx, DIO_u8_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(Copy_u8LedIndx, DIO_u8_LOW);
	}
}

