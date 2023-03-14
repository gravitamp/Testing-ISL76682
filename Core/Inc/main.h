/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32h7xx_hal.h"

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
#define TEMP1_Pin GPIO_PIN_4
#define TEMP1_GPIO_Port GPIOC
#define TEMP2_Pin GPIO_PIN_5
#define TEMP2_GPIO_Port GPIOC
#define EN_TPS_Pin GPIO_PIN_12
#define EN_TPS_GPIO_Port GPIOB
#define ISEL_TPS_Pin GPIO_PIN_13
#define ISEL_TPS_GPIO_Port GPIOB
#define EN_MT3608_Pin GPIO_PIN_14
#define EN_MT3608_GPIO_Port GPIOB
#define ERROR_Pin GPIO_PIN_15
#define ERROR_GPIO_Port GPIOB
#define HVR_Pin GPIO_PIN_11
#define HVR_GPIO_Port GPIOD
#define BL_DIM_Pin GPIO_PIN_8
#define BL_DIM_GPIO_Port GPIOC
#define BL_EN_Pin GPIO_PIN_9
#define BL_EN_GPIO_Port GPIOA
#define SHTDN_Pin GPIO_PIN_15
#define SHTDN_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
