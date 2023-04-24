/*
 * h_brug.c
 *
 *  Created on: Apr 19, 2023
 *      Author: robbe
 */

#include "h_brug.h"

void turnMotorVccOn(){
	HAL_GPIO_WritePin(M_VCC_EN_GPIO_Port, M_VCC_EN_Pin, GPIO_PIN_SET);
}

void turnMotorVccOff(){
	HAL_GPIO_WritePin(M_VCC_EN_GPIO_Port, M_VCC_EN_Pin, GPIO_PIN_RESET);
}
void rotateLeft(){
	HAL_GPIO_WritePin(M_RIGHT_GPIO_Port, M_RIGHT_Pin, GPIO_PIN_RESET);
	for(int i = 0; i < 100; i++);	//kleine delay zodat mosfet uit kan doven.
	HAL_GPIO_WritePin(M_LEFT_GPIO_Port, M_LEFT_Pin, GPIO_PIN_SET);
}
void rotateRight(){
	HAL_GPIO_WritePin(M_LEFT_GPIO_Port, M_LEFT_Pin, GPIO_PIN_RESET);
	for(int i = 0; i < 100; i++);	//kleine delay zodat mosfet uit kan doven.
	HAL_GPIO_WritePin(M_RIGHT_GPIO_Port, M_RIGHT_Pin, GPIO_PIN_SET);
}
void rotateStop(){
	HAL_GPIO_WritePin(M_LEFT_GPIO_Port, M_LEFT_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(M_RIGHT_GPIO_Port, M_RIGHT_Pin, GPIO_PIN_RESET);
}
