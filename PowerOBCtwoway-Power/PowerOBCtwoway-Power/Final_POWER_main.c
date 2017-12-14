/*
 * Final_Power.c
 *
 * Created: 11/4/2017 7:22:58 PM
 * Author : zeus
 */ 

#include <avr/io.h>
#include "avr/interrupt.h"
#include "TWI_slave.h"
#include "common.h"
#include "uart.h"
//-----------------slave receiver----------------------------//
//unsigned char msg_buf[8]={'9','9','9','9','9','9','9','9'};
//msg_buf[0]='9';

int main(void)
{
    sei();
	//msg_buf[0] ='9';
	
	
	unsigned char SLA=0x20;
	//msg_buf[0] ='9';
	
	init_UART();
	TWI_Slave_Initialise(SLA);
	
	//TWI_Start_Transceiver_With_Data(msg_buf,1);
	
	/* TWCR = (1<<TWEN)|                                 // TWI Interface enabled
	 (1<<TWIE)|(1<<TWINT)|                      // Enable TWI Interupt and clear the flag to send byte
	 (1<<TWEA)|(0<<TWSTA)|(0<<TWSTO)|           //
	 (0<<TWWC);*/
	TWI_Start_Transceiver_With_Data(msg_buf,1);
    while (1) 
    {
		
		//unsigned char z = TWI_Get_Data_From_Transceiver(msg_buf , 1);//sr
		//transmit_UART('a');
		transmit_UART(msg_buf[0]);//sr
		//transmit_UART('b');
		//HM_data[0]='9';
		//while(TWSR!=0xA8){transmit_UART(TWSR);}
		//TWI_Start_Transceiver_With_Data(HM_data,1);
		HM_data[0]='9';
		//HM_data[0]='9';
		//HM_data[0]=receive_UART();//st
		_delay_ms(100);//sr
		
	}
}

