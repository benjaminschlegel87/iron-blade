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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_ROT_Pin GPIO_PIN_14
#define LED_ROT_GPIO_Port GPIOC
#define LED_GRUEN_Pin GPIO_PIN_15
#define LED_GRUEN_GPIO_Port GPIOC
#define SPN_24V_LEVEL_ADJ_1_Pin GPIO_PIN_0
#define SPN_24V_LEVEL_ADJ_1_GPIO_Port GPIOC
#define SPN_24V_LEVEL_ADJ_2_Pin GPIO_PIN_1
#define SPN_24V_LEVEL_ADJ_2_GPIO_Port GPIOC
#define EXTERNAL_SIGNAL_EN_Pin GPIO_PIN_2
#define EXTERNAL_SIGNAL_EN_GPIO_Port GPIOC
#define VARIANT_IDENTIFIER_1_Pin GPIO_PIN_3
#define VARIANT_IDENTIFIER_1_GPIO_Port GPIOC
#define U_AKKU_PACK_Pin GPIO_PIN_1
#define U_AKKU_PACK_GPIO_Port GPIOA
#define U_AKKU_PWR_Pin GPIO_PIN_2
#define U_AKKU_PWR_GPIO_Port GPIOA
#define U_24V_Pin GPIO_PIN_3
#define U_24V_GPIO_Port GPIOA
#define TEMP_X_Pin GPIO_PIN_4
#define TEMP_X_GPIO_Port GPIOA
#define VARIANT_IDENTIFIER_6_Pin GPIO_PIN_5
#define VARIANT_IDENTIFIER_6_GPIO_Port GPIOA
#define MPLX_S_0_Pin GPIO_PIN_7
#define MPLX_S_0_GPIO_Port GPIOA
#define MPLX_S_1_Pin GPIO_PIN_4
#define MPLX_S_1_GPIO_Port GPIOC
#define MPLX_S_2_Pin GPIO_PIN_5
#define MPLX_S_2_GPIO_Port GPIOC
#define VCC_SUPPLY_EN_Pin GPIO_PIN_0
#define VCC_SUPPLY_EN_GPIO_Port GPIOB
#define DSG_BYPASS_FET_EN_Pin GPIO_PIN_1
#define DSG_BYPASS_FET_EN_GPIO_Port GPIOB
#define SWITCH_CAP_SENSE_STATUS_Pin GPIO_PIN_2
#define SWITCH_CAP_SENSE_STATUS_GPIO_Port GPIOB
#define EXTERNAL_SIGNAL_SENSE_STATUS_Pin GPIO_PIN_10
#define EXTERNAL_SIGNAL_SENSE_STATUS_GPIO_Port GPIOB
#define ON_OFF_SENSE_STATUS_Pin GPIO_PIN_11
#define ON_OFF_SENSE_STATUS_GPIO_Port GPIOB
#define LTC681X_CS_Pin GPIO_PIN_12
#define LTC681X_CS_GPIO_Port GPIOB
#define LTC681X_CLK_Pin GPIO_PIN_13
#define LTC681X_CLK_GPIO_Port GPIOB
#define LTC681X_MISO_Pin GPIO_PIN_14
#define LTC681X_MISO_GPIO_Port GPIOB
#define LTC681X_MOSI_Pin GPIO_PIN_15
#define LTC681X_MOSI_GPIO_Port GPIOB
#define LTC681X_WDT_Pin GPIO_PIN_6
#define LTC681X_WDT_GPIO_Port GPIOC
#define CHG_FET_EN_Pin GPIO_PIN_7
#define CHG_FET_EN_GPIO_Port GPIOC
#define DSG_FET_EN_Pin GPIO_PIN_8
#define DSG_FET_EN_GPIO_Port GPIOC
#define VARIANT_IDENTIFIER_2_Pin GPIO_PIN_9
#define VARIANT_IDENTIFIER_2_GPIO_Port GPIOC
#define U_X_MEAS_EN_Pin GPIO_PIN_8
#define U_X_MEAS_EN_GPIO_Port GPIOA
#define I_SC_CHG_Pin GPIO_PIN_9
#define I_SC_CHG_GPIO_Port GPIOA
#define MPLX_TEST_EN_Pin GPIO_PIN_10
#define MPLX_TEST_EN_GPIO_Port GPIOA
#define CAN_RX_Pin GPIO_PIN_11
#define CAN_RX_GPIO_Port GPIOA
#define CAN_TX_Pin GPIO_PIN_12
#define CAN_TX_GPIO_Port GPIOA
#define SYS_JTMS_SWDIO_Pin GPIO_PIN_13
#define SYS_JTMS_SWDIO_GPIO_Port GPIOA
#define SYS_JCK_SWDCLK_Pin GPIO_PIN_14
#define SYS_JCK_SWDCLK_GPIO_Port GPIOA
#define VARIANT_IDENTIFIER_3_Pin GPIO_PIN_10
#define VARIANT_IDENTIFIER_3_GPIO_Port GPIOC
#define VARIANT_IDENTIFIER_4_Pin GPIO_PIN_11
#define VARIANT_IDENTIFIER_4_GPIO_Port GPIOC
#define VARIANT_IDENTIFIER_5_Pin GPIO_PIN_12
#define VARIANT_IDENTIFIER_5_GPIO_Port GPIOC
#define I_SC_DSG_Pin GPIO_PIN_2
#define I_SC_DSG_GPIO_Port GPIOD
#define SYS_JTDO_SWO_Pin GPIO_PIN_3
#define SYS_JTDO_SWO_GPIO_Port GPIOB
#define TEST_OUT_Pin GPIO_PIN_4
#define TEST_OUT_GPIO_Port GPIOB
#define SCND_TRIGGER_OUT_Pin GPIO_PIN_5
#define SCND_TRIGGER_OUT_GPIO_Port GPIOB
#define UART1_TXD_Pin GPIO_PIN_6
#define UART1_TXD_GPIO_Port GPIOB
#define UART1_RXD_Pin GPIO_PIN_7
#define UART1_RXD_GPIO_Port GPIOB
#define TEST_1_Pin GPIO_PIN_3
#define TEST_1_GPIO_Port GPIOH
#define SCND_VOLTAGE_STATUS_Pin GPIO_PIN_8
#define SCND_VOLTAGE_STATUS_GPIO_Port GPIOB
#define SPN_24V_FET_EN_Pin GPIO_PIN_9
#define SPN_24V_FET_EN_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
