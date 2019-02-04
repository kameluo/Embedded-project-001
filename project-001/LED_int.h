/*******************************************/
/* Author : Ahmed Assaf 				   */
/* Date : 26/1/2018							*/
/* Version : V01							*/


#ifndef _LED_INT_H
#define _LED_INT_H


/************* mine  **************/
#define LED_u8_INDX_0			DIO_u8_PIN_0
#define LED_u8_INDX_1			DIO_u8_PIN_1
#define LED_u8_INDX_2			DIO_u8_PIN_2
#define LED_u8_INDX_3			DIO_u8_PIN_3
#define LED_u8_INDX_4			DIO_u8_PIN_4
#define LED_u8_INDX_5			DIO_u8_PIN_5
#define LED_u8_INDX_6			DIO_u8_PIN_6
#define LED_u8_INDX_7			DIO_u8_PIN_7
#define LED_u8_INDX_8			DIO_u8_PIN_8
#define LED_u8_INDX_9			DIO_u8_PIN_9
#define LED_u8_INDX_10			DIO_u8_PIN_10
#define LED_u8_INDX_11			DIO_u8_PIN_11
#define LED_u8_INDX_12			DIO_u8_PIN_12
#define LED_u8_INDX_13			DIO_u8_PIN_13
#define LED_u8_INDX_14			DIO_u8_PIN_14
#define LED_u8_INDX_15			DIO_u8_PIN_15
#define LED_u8_INDX_16			DIO_u8_PIN_16
#define LED_u8_INDX_17			DIO_u8_PIN_17
#define LED_u8_INDX_18			DIO_u8_PIN_18
#define LED_u8_INDX_19			DIO_u8_PIN_19
#define LED_u8_INDX_20			DIO_u8_PIN_20
#define LED_u8_INDX_21			DIO_u8_PIN_21
#define LED_u8_INDX_22			DIO_u8_PIN_22
#define LED_u8_INDX_23			DIO_u8_PIN_23
#define LED_u8_INDX_24			DIO_u8_PIN_24
#define LED_u8_INDX_25			DIO_u8_PIN_25
#define LED_u8_INDX_26			DIO_u8_PIN_26
#define LED_u8_INDX_27			DIO_u8_PIN_27
#define LED_u8_INDX_28			DIO_u8_PIN_28
#define LED_u8_INDX_29			DIO_u8_PIN_29
#define LED_u8_INDX_30			DIO_u8_PIN_30
#define LED_u8_INDX_31			DIO_u8_PIN_31


/* Description  : This function shall 
/* 		make LED on	*/
void LED_voidSetLedOn(void);


/* Description  : This function shall 
/* 		make LED off	*/
void LED_voidSetLedOff(void);


/* Description  : This function shall 
/* 		make LED on but takes the index of the LED	*/
void LED_voidSetLedOnWithIndx(u8 Copy_u8LedIndx);

/* Description  : This function shall 
/* 		make LED off but takes the index of the LED	*/
void LED_voidSetLedOffWithIndx(u8 Copy_u8LedIndx);

#endif
