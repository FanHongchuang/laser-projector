#ifndef __LED_H__
#define __LED_H__

#include "stm32f10x.h"

// RED
#define RED_CHANNEL1_4_PORT   					GPIOB

#define RED_CHANNEL1_PIN								GPIO_Pin_12
#define RED_CHANNEL2_PIN								GPIO_Pin_13
#define RED_CHANNEL3_PIN      					GPIO_Pin_14
#define RED_CHANNEL4_PIN								GPIO_Pin_15

#define RED_CHANNEL5_6_PORT   					GPIOC
#define RED_CHANNEL5_PIN								GPIO_Pin_6
#define RED_CHANNEL6_PIN								GPIO_Pin_7

// GREEN
#define GREEN_CHANNEL_1_2_PORT 					GPIOC

#define GREEN_CHANNEL1_PIN							GPIO_Pin_8
#define GREEN_CHANNEL2_PIN							GPIO_Pin_9

#define GREEN_CHANNEL_3_7_PORT 					GPIOD

#define GREEN_CHANNEL3_PIN							GPIO_Pin_8
#define GREEN_CHANNEL4_PIN							GPIO_Pin_9
#define GREEN_CHANNEL5_PIN							GPIO_Pin_10
#define GREEN_CHANNEL6_PIN							GPIO_Pin_11
#define GREEN_CHANNEL7_PIN							GPIO_Pin_12

// BLUE
#define BLUE_PORT												GPIOD

#define BLUE_CHANNEL1_PIN								GPIO_Pin_13
#define BLUE_CHANNEL2_PIN								GPIO_Pin_14

// GREEN532
#define GREEN532_PORT										GPIOD

#define GREEN532_CHANNEL1_PIN						GPIO_Pin_15



#define READ_RED_CHANNEL1()  			GPIO_ReadInputDataBit(RED_CHANNEL1_4_PORT,RED_CHANNEL1_PIN)
#define READ_RED_CHANNEL2()  			GPIO_ReadInputDataBit(RED_CHANNEL1_4_PORT,RED_CHANNEL2_PIN)
#define READ_RED_CHANNEL3()  			GPIO_ReadInputDataBit(RED_CHANNEL1_4_PORT,RED_CHANNEL3_PIN)
#define READ_RED_CHANNEL4()  			GPIO_ReadInputDataBit(RED_CHANNEL1_4_PORT,RED_CHANNEL4_PIN)
#define READ_RED_CHANNEL5()  			GPIO_ReadInputDataBit(RED_CHANNEL5_6_PORT,RED_CHANNEL5_PIN)
#define READ_RED_CHANNEL6()  			GPIO_ReadInputDataBit(RED_CHANNEL5_6_PORT,RED_CHANNEL6_PIN)

#define READ_GREEN_CHANNEL1()  		GPIO_ReadInputDataBit(GREEN_CHANNEL_1_2_PORT,GREEN_CHANNEL1_PIN)
#define READ_GREEN_CHANNEL2()  		GPIO_ReadInputDataBit(GREEN_CHANNEL_1_2_PORT,GREEN_CHANNEL2_PIN)
#define READ_GREEN_CHANNEL3()  		GPIO_ReadInputDataBit(GREEN_CHANNEL_3_7_PORT,GREEN_CHANNEL3_PIN)
#define READ_GREEN_CHANNEL4()  		GPIO_ReadInputDataBit(GREEN_CHANNEL_3_7_PORT,GREEN_CHANNEL4_PIN)
#define READ_GREEN_CHANNEL5()  		GPIO_ReadInputDataBit(GREEN_CHANNEL_3_7_PORT,GREEN_CHANNEL5_PIN)
#define READ_GREEN_CHANNEL6()  		GPIO_ReadInputDataBit(GREEN_CHANNEL_3_7_PORT,GREEN_CHANNEL6_PIN)
#define READ_GREEN_CHANNEL7()  		GPIO_ReadInputDataBit(GREEN_CHANNEL_3_7_PORT,GREEN_CHANNEL7_PIN)

#define READ_BLUE_CHANNEL1()  		GPIO_ReadInputDataBit(BLUE_PORT,BLUE_CHANNEL1_PIN)
#define READ_BLUE_CHANNEL2()  		GPIO_ReadInputDataBit(BLUE_PORT,BLUE_CHANNEL2_PIN)

#define READ_GREEN532_CHANNEL1()  GPIO_ReadInputDataBit(GREEN532_PORT,GREEN532_CHANNEL1_PIN)

void led_init(void);
void led_state_init(void);

uint16_t get_led_state(void);


#endif