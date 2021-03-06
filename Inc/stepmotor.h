/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : stepmotor.h
  * @brief          : Nguyen Trung Hieu
  *                   hieunt91@viettel.com.vn
  *                   Dai Hoc Dien Luc
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
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


#ifndef __STEPMOTOR_H
#define __STEPMOTOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stdbool.h"
#include "stdio.h"

#define IN1_Port GPIOC
#define IN2_Port GPIOC
#define IN3_Port GPIOC
#define IN4_Port GPIOC

#define IN1_Pin	GPIO_PIN_0
#define IN2_Pin	GPIO_PIN_1
#define IN3_Pin	GPIO_PIN_2
#define IN4_Pin	GPIO_PIN_3

#define delayTime 1

void directionOfRotation(bool direction, int degree);


#ifdef __cplusplus
}
#endif

#endif /* __STEPMOTOR_H */
