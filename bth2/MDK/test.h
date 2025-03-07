#ifndef __DHT11_H
#define __DHT11_H

#include "stm32f10x.h"
void Timer2_Init(void);
void UART_Init(void);
void Delay_Ms(uint16_t ms);
void DHT11_Init(void);                    
void DHT11_Start(void);                    
uint8_t DHT11_Check_Response(void);        
uint8_t DHT11_Read_Bit(void);            
uint8_t DHT11_Read_Byte(void);             
uint8_t DHT11_Read_Data(uint8_t *temp, uint8_t *humi);  

#endif
