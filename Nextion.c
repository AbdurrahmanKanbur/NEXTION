/*
 * Nextion.c
 *
 *  Created on: Sep 14, 2021
 *      Author: USER
 */
#include "main.h"
#include "stdio.h"
extern UART_HandleTypeDef huart1;
char Cmd_End=0xff;
char buf[35];
void Nextion_Send_String(char *ID,char *string){
	int len = sprintf (buf, "%s.txt=\"%s\"%c%c%c", ID, string,Cmd_End,Cmd_End,Cmd_End);
	HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 100);
//    HAL_UART_Transmit(&huart1, Cmd_End, 3, 100);
}
void Nextion_Send_String_Color(char *ID,char *string){
	int len = sprintf (buf, "%s.pco=\%s\"%c%c%c", ID, string,Cmd_End,Cmd_End,Cmd_End);
	HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 100);
//		HAL_UART_Transmit(&huart1, Cmd_End, 3, 100);C
}
void Nextion_Send_Value_Float(char*ID, float Value){
	int len = sprintf (buf, "%s.txt=\"%.3f\"%c%c%c", ID, Value,Cmd_End,Cmd_End,Cmd_End);
	HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 100);
//		HAL_UART_Transmit(&huart1, Cmd_End, 3, 100);
}
void Nextion_Send_Value_int_Vrbl(char*ID, int Value){
	int len = sprintf (buf, "%s.val=\%d\"%c%c%c", ID, Value,Cmd_End,Cmd_End,Cmd_End);
	HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 100);
//		HAL_UART_Transmit(&huart1, Cmd_End, 3, 100);
}
void Nextion_Send_Value_Float_Num_arti(char*ID){
	int len = sprintf (buf, "%s.val++%c%c%c", ID,Cmd_End,Cmd_End,Cmd_End);
	HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 100);
//		HAL_UART_Transmit(&huart1, Cmd_End, 3, 100);
}
void Nextion_Send_Value_Float_Num_eksi(char*ID){
	int len = sprintf (buf, "%s.val--%c%c%c", ID,Cmd_End,Cmd_End,Cmd_End);
	HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 100);
//		HAL_UART_Transmit(&huart1, Cmd_End, 3, 100);C
}
void Nextion_Send_Value_Integer(char*ID, int Value){
	int len = sprintf (buf, "%s.txt=\"%d\"%c%c%c", ID, Value,Cmd_End,Cmd_End,Cmd_End);
	HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 100);
//		HAL_UART_Transmit(&huart1, Cmd_End, 3, 100);
}
void Nextion_Send_Value_Picture(char *ID,int Varble){
	int len = sprintf (buf, "%s.pic=%d%c%c%c", ID, Varble,Cmd_End,Cmd_End,Cmd_End);
	HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 100);
//		HAL_UART_Transmit(&huart1, Cmd_End, 3, 100);
}
void Nextion_Send_Page(char *ID){
	int len = sprintf (buf, "page %s%c%c%c", ID,Cmd_End,Cmd_End,Cmd_End);
	HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 100);
//		HAL_UART_Transmit(&huart1, Cmd_End, 3, 100);C
}
void Nextion_Send_Value_Float2(char*ID, float Value){
	int len = sprintf (buf, "%s.val=%.f%c%c%c", ID, Value,Cmd_End,Cmd_End,Cmd_End);
	HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 100);
//		HAL_UART_Transmit(&huart1, Cmd_End, 3, 100);
}


