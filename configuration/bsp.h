/**
 * \file bsp.h
 * \brief classic Board Support Package
 *
 * Basic configuration of the project
 *
 * project: mg-stm32l_acquisition_supervisor; chip: STM32L152RB
 *
 * \author Mazeryt Freager
 * \date 2014-07-29
 */

#ifndef BSP_H_
#define BSP_H_

/*---------------------------------------------------------------------------------------------------------------------+
| LEDs INTERFACE
+---------------------------------------------------------------------------------------------------------------------*/

#define LED_GPIO							GPIOB	///< GPIO port to which the LED is connected
#define LED_pin								GPIO_PIN6	///< pin number of the LED
#define LED_pin_1							GPIO_PIN7	///< pin number of the LED1
#define LED_pin_2							GPIO_PIN13	///< pin number of the LED2
#define LED_pin_3							GPIO_PIN14	///< pin number of the LED3

/// bit-band "variable" to directly handle the pin
#define LED_bb								BITBAND(&LED_GPIO->ODR, LED_pin)
#define LED1_bb								BITBAND(&LED_GPIO->ODR, LED_pin_1)
#define LED2_bb								BITBAND(&LED_GPIO->ODR, LED_pin_2)
#define LED3_bb								BITBAND(&LED_GPIO->ODR, LED_pin_3)

/*---------------------------------------------------------------------------------------------------------------------+
| BUTTON INTERFACE
+---------------------------------------------------------------------------------------------------------------------*/

#define BUTTON_GPIO							GPIOA
#define BUTTON_PIN							GPIO_PIN0
#define BUTTON_CONFIGURATION				GPIO_IN_FLOATING

/*---------------------------------------------------------------------------------------------------------------------+
| BUTTON INTERFACE
+---------------------------------------------------------------------------------------------------------------------*/

#define SERVICE_PIN_GPIO					GPIOA
#define SERVICE_PIN_PIN						GPIO_PIN4
#define SERVICE_PIN_CONFIGURATION			GPIO_IN_PULL_UP

/*---------------------------------------------------------------------------------------------------------------------+
| LCD INTERFACE
+---------------------------------------------------------------------------------------------------------------------*/

/// comons
#define LCD_COM0_GPIO						GPIOA
#define LCD_COM0_pin						GPIO_PIN8
#define LCD_COM1_GPIO						GPIOA
#define LCD_COM1_pin						GPIO_PIN9
#define LCD_COM2_GPIO						GPIOA
#define LCD_COM2_pin						GPIO_PIN10
#define LCD_COM3_GPIO						GPIOB
#define LCD_COM3_pin						GPIO_PIN9

/// segments
#define LCD_SEG0_GPIO						GPIOA
#define LCD_SEG0_pin						GPIO_PIN1
#define LCD_SEG1_GPIO						GPIOA
#define LCD_SEG1_pin						GPIO_PIN2
#define LCD_SEG2_GPIO						GPIOA
#define LCD_SEG2_pin						GPIO_PIN3
#define LCD_SEG3_GPIO						GPIOB
#define LCD_SEG3_pin						GPIO_PIN3
#define LCD_SEG4_GPIO						GPIOB
#define LCD_SEG4_pin						GPIO_PIN4
#define LCD_SEG5_GPIO						GPIOB
#define LCD_SEG5_pin						GPIO_PIN5
#define LCD_SEG6_GPIO						GPIOB
#define LCD_SEG6_pin						GPIO_PIN10
#define LCD_SEG7_GPIO						GPIOB
#define LCD_SEG7_pin						GPIO_PIN11
#define LCD_SEG8_GPIO						GPIOB
#define LCD_SEG8_pin						GPIO_PIN12
#define LCD_SEG9_GPIO						GPIOB
#define LCD_SEG9_pin						GPIO_PIN13
#define LCD_SEG10_GPIO						GPIOB
#define LCD_SEG10_pin						GPIO_PIN14
#define LCD_SEG11_GPIO						GPIOB
#define LCD_SEG11_pin						GPIO_PIN15
#define LCD_SEG12_GPIO						GPIOA
#define LCD_SEG12_pin						GPIO_PIN15
#define LCD_SEG13_GPIO						GPIOB
#define LCD_SEG13_pin						GPIO_PIN8
#define LCD_SEG14_GPIO						GPIOC
#define LCD_SEG14_pin						GPIO_PIN0
#define LCD_SEG15_GPIO						GPIOC
#define LCD_SEG15_pin						GPIO_PIN1
#define LCD_SEG16_GPIO						GPIOC
#define LCD_SEG16_pin						GPIO_PIN2
#define LCD_SEG17_GPIO						GPIOC
#define LCD_SEG17_pin						GPIO_PIN3
#define LCD_SEG18_GPIO						GPIOC
#define LCD_SEG18_pin						GPIO_PIN6
#define LCD_SEG19_GPIO						GPIOC
#define LCD_SEG19_pin						GPIO_PIN7
#define LCD_SEG20_GPIO						GPIOC
#define LCD_SEG20_pin						GPIO_PIN8
#define LCD_SEG21_GPIO						GPIOC
#define LCD_SEG21_pin						GPIO_PIN9
#define LCD_SEG22_GPIO						GPIOC
#define LCD_SEG22_pin						GPIO_PIN10
#define LCD_SEG23_GPIO						GPIOC
#define LCD_SEG23_pin						GPIO_PIN11

/// number of digits
#define LCD_NUMBER_OF_DIGITS				6


/*---------------------------------------------------------------------------------------------------------------------+
| SD card
+---------------------------------------------------------------------------------------------------------------------*/

#define SD_CS_GPIO							GPIOC
#define SD_CS_PIN							GPIO_PIN12
#define SD_CS_bb							BITBAND(&SD_CS_GPIO->ODR, SD_CS_PIN)

#define SD_CS_ASSERTED						0
#define SD_CS_DEASSERTED					1

/*---------------------------------------------------------------------------------------------------------------------+
| ACC
+---------------------------------------------------------------------------------------------------------------------*/


#endif //BSP_H_
