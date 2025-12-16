/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
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
#include "stm32l4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TIM3_PRESCALER 3
#define TIM3_PERIOD 999
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define SENSOR7_Pin GPIO_PIN_0
#define SENSOR7_GPIO_Port GPIOC
#define SENSOR5_Pin GPIO_PIN_1
#define SENSOR5_GPIO_Port GPIOC
#define SENSOR6_Pin GPIO_PIN_2
#define SENSOR6_GPIO_Port GPIOC
#define SENSOR8_Pin GPIO_PIN_3
#define SENSOR8_GPIO_Port GPIOC
#define SENSOR1_Pin GPIO_PIN_0
#define SENSOR1_GPIO_Port GPIOA
#define SENSOR2_Pin GPIO_PIN_1
#define SENSOR2_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define SENSOR3_Pin GPIO_PIN_4
#define SENSOR3_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define PWMA_Pin GPIO_PIN_6
#define PWMA_GPIO_Port GPIOA
#define PWMB_Pin GPIO_PIN_7
#define PWMB_GPIO_Port GPIOA
#define SENSOR4_Pin GPIO_PIN_0
#define SENSOR4_GPIO_Port GPIOB
#define B_IN1_Pin GPIO_PIN_7
#define B_IN1_GPIO_Port GPIOC
#define A_IN1_Pin GPIO_PIN_8
#define A_IN1_GPIO_Port GPIOA
#define A_IN2_Pin GPIO_PIN_9
#define A_IN2_GPIO_Port GPIOA
#define LED_SENSORS_Pin GPIO_PIN_10
#define LED_SENSORS_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define MD_STBY_Pin GPIO_PIN_5
#define MD_STBY_GPIO_Port GPIOB
#define B_IN2_Pin GPIO_PIN_6
#define B_IN2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
