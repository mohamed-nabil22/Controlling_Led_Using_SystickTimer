#include "stdint.h"
#include "DIO_program.c"

void HU()
{
	NVIC_ST_CTRL_R = 0;
	NVIC_ST_RELOAD_R = 16000;/* 1/16Mhz=62.5ns ,1/62.5ns = 16000*/
	NVIC_ST_CURRENT_R = 0;/*clear counter & clear flag*/
  NVIC_ST_CTRL_R = 5;	/*enable systick & clk bits*/
}
int main()
{
	
	DIO_init(PORTF);
	HU();
	DIO_voidSetPinDirection(PORTF,PIN1,DIO_OUTPUT);
	DIO_voidSetPinDirection(PORTF,PIN2,DIO_OUTPUT);
	DIO_voidSetPinDirection(PORTF,PIN3,DIO_OUTPUT);
	while(1)
		{
			
			if((NVIC_ST_CTRL_R&0x10000) == 1)/*check counter flag in bit 5 if 1 means current counter has reached to zero so turn on led */
			{
				DIO_voidSetPinValue(PORTF,PIN1,DIO_HIGH);		
			}
			else
				DIO_voidSetPinValue(PORTF,PIN1,DIO_LOW);
					
		}
		

}
