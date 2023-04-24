/*
 * h_brug.h
 *
 *  Created on: Apr 19, 2023
 *      Author: robbe
 */

#ifndef H_BRUG_INC_H_BRUG_H
#define H_BRUG_INC_H_BRUG_H

#include "stm32f411xe.h"
#include "main.h"
//void initialize()//wordt al gedaan in main.
void turnMotorVccOn();
void turnMotorVccOff();
void rotateLeft();
void rotateRight();
void rotateStop();
//void rotateLeft(TIM_TypeDef* t);
//void rotateRight(TIM_TypeDef* t);
/**
 * tussen -100 en 100;
 */
//void rotatePWM(TIM_TypeDef* t, int32_t pwmValue);

#endif /*H_BRUG_INC_H_BRUG_H*/
