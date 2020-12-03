/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Row0_Pin GPIO_PIN_0
#define Row0_GPIO_Port GPIOC
#define Row1_Pin GPIO_PIN_1
#define Row1_GPIO_Port GPIOC
#define Row2_Pin GPIO_PIN_2
#define Row2_GPIO_Port GPIOC
#define Row3_Pin GPIO_PIN_3
#define Row3_GPIO_Port GPIOC
#define Row4_Pin GPIO_PIN_0
#define Row4_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_1
#define SWO_GPIO_Port GPIOA
#define LCD_RST_Pin GPIO_PIN_3
#define LCD_RST_GPIO_Port GPIOA
#define TS_BUSY_Pin GPIO_PIN_4
#define TS_BUSY_GPIO_Port GPIOF
#define LCD_CS_Pin GPIO_PIN_4
#define LCD_CS_GPIO_Port GPIOA
#define TS_CS_Pin GPIO_PIN_4
#define TS_CS_GPIO_Port GPIOC
#define TS_BUSYC5_Pin GPIO_PIN_5
#define TS_BUSYC5_GPIO_Port GPIOC
#define LCD_LED_Pin GPIO_PIN_0
#define LCD_LED_GPIO_Port GPIOB
#define Col7_Pin GPIO_PIN_15
#define Col7_GPIO_Port GPIOB
#define Col8_Pin GPIO_PIN_6
#define Col8_GPIO_Port GPIOC
#define Col9_Pin GPIO_PIN_7
#define Col9_GPIO_Port GPIOC
#define Col10_Pin GPIO_PIN_8
#define Col10_GPIO_Port GPIOC
#define Col11_Pin GPIO_PIN_9
#define Col11_GPIO_Port GPIOC
#define Col12_Pin GPIO_PIN_8
#define Col12_GPIO_Port GPIOA
#define Col13_Pin GPIO_PIN_9
#define Col13_GPIO_Port GPIOA
#define Col0_Pin GPIO_PIN_3
#define Col0_GPIO_Port GPIOB
#define Col1_Pin GPIO_PIN_4
#define Col1_GPIO_Port GPIOB
#define Col2_Pin GPIO_PIN_5
#define Col2_GPIO_Port GPIOB
#define Col3_Pin GPIO_PIN_6
#define Col3_GPIO_Port GPIOB
#define Col4_Pin GPIO_PIN_7
#define Col4_GPIO_Port GPIOB
#define Col5_Pin GPIO_PIN_8
#define Col5_GPIO_Port GPIOB
#define Col6_Pin GPIO_PIN_9
#define Col6_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
