/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
typedef enum
{
  FC_STATE_INIT = 0,
  FC_STATE_READY,
  FC_STATE_ERROR_IMU,
  FC_STATE_LOW_BATTERY,
  FC_STATE_ERROR_SD,
  FC_STATE_ERROR_POWER,
} FC_State_t;
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
void LED_Status_Init(void);
void LED_Status_Set(FC_State_t state);
void LED_Status_Update(void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_R_Pin GPIO_PIN_0
#define LED_R_GPIO_Port GPIOC
#define LED_G_Pin GPIO_PIN_1
#define LED_G_GPIO_Port GPIOC
#define LED_B_Pin GPIO_PIN_2
#define LED_B_GPIO_Port GPIOC
#define ICM_INT1_Pin GPIO_PIN_4
#define ICM_INT1_GPIO_Port GPIOC
#define SD_CS_Pin GPIO_PIN_3
#define SD_CS_GPIO_Port GPIOB
#define BQ_INT_Pin GPIO_PIN_5
#define BQ_INT_GPIO_Port GPIOB
#define BQ_CE_Pin GPIO_PIN_8
#define BQ_CE_GPIO_Port GPIOB
#define BMP_INT_Pin GPIO_PIN_9
#define BMP_INT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
#define LED_PWM_STEPS      100U
#define LED_PWM_REFRESH_HZ 200U
#define LED_PWM_TICK_HZ    (LED_PWM_STEPS * LED_PWM_REFRESH_HZ)
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
