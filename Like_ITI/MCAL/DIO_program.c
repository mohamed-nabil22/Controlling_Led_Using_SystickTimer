#include "D:/Advanced embedded/Udemy/KeilWorkspace/TI/Like_ITI/LIB/STD_TYPES.H"
#include "D:/Advanced embedded/Udemy/KeilWorkspace/TI/Like_ITI/LIB/BIT_MATH.H"
#include "DIO_interface.h"
#include "Tm4c123gh6pm.h"
uint32_t delay;
void DIO_init(u8 Copy_u8PortName)
{
    switch(Copy_u8PortName)
    {
          case PORTA:
        {
					
           SYSCTL_RCGCGPIO_R |= 0x01;/*clock*/
					 delay = 1;
           GPIO_PORTA_AFSEL_R = 0;
					 GPIO_PORTA_PCTL_R = 0;
					 GPIO_PORTA_PUR_R = 0xFF;/*pull up pins*/
					 GPIO_PORTA_DEN_R = 0xFF;/*digital pins*/
					 GPIO_PORTA_LOCK_R = 0x4C4F434B;/*key to access all pins as gpio pins*/
					 GPIO_PORTA_CR_R = 0xFF;/*unlocked pins and may be modified*/
            break;
        }
           case PORTB:
        {
					
           SYSCTL_RCGCGPIO_R |= 0x02;/*clock*/
					 delay = 1;
           GPIO_PORTB_AFSEL_R = 0;
					 GPIO_PORTB_PCTL_R = 0;
					 GPIO_PORTB_PUR_R = 0xFF;/*pull up pins*/
					 GPIO_PORTB_DEN_R = 0xFF;/*digital pins*/
					 GPIO_PORTB_LOCK_R = 0x4C4F434B;/*key to access all pins as gpio pins*/
					 GPIO_PORTB_CR_R = 0xFF;/*unlocked pins and may be modified*/
            break;
        }
            case PORTC:
        {
					
           SYSCTL_RCGCGPIO_R |= 0x04;/*clock*/
					 delay = 1;
           GPIO_PORTC_AFSEL_R = 0;
					 GPIO_PORTC_PCTL_R = 0;
					 GPIO_PORTC_PUR_R = 0xFF;/*pull up pins*/
					 GPIO_PORTC_DEN_R = 0xFF;/*digital pins*/
					 GPIO_PORTC_LOCK_R = 0x4C4F434B;/*key to access all pins as gpio pins*/
					 GPIO_PORTC_CR_R = 0xFF;/*unlocked pins and may be modified*/
            break;
        }
           case PORTD:
        {
					
           SYSCTL_RCGCGPIO_R |= 0x08;/*clock*/
					 delay = 1;
           GPIO_PORTD_AFSEL_R = 0;
					 GPIO_PORTD_PCTL_R = 0;
					 GPIO_PORTD_PUR_R = 0xFF;/*pull up pins*/
					 GPIO_PORTD_DEN_R = 0xFF;/*digital pins*/
					 GPIO_PORTD_LOCK_R = 0x4C4F434B;/*key to access all pins as gpio pins*/
					 GPIO_PORTD_CR_R = 0xFF;/*unlocked pins and may be modified*/
            break;
        }
           case PORTE:
        {
					
           SYSCTL_RCGCGPIO_R |= 0x10;/*clock*/
					 delay = 1;
           GPIO_PORTE_AFSEL_R = 0;
					 GPIO_PORTE_PCTL_R = 0;
					 GPIO_PORTE_PUR_R = 0xFF;/*pull up pins*/
					 GPIO_PORTE_DEN_R = 0xFF;/*digital pins*/
					 GPIO_PORTE_LOCK_R = 0x4C4F434B;/*key to access all pins as gpio pins*/
					 GPIO_PORTE_CR_R = 0xFF;/*unlocked pins and may be modified*/
            break;
        }
        case PORTF:
        {
					
           SYSCTL_RCGCGPIO_R |= 0x20;/*clock*/
					 delay = 1;
           GPIO_PORTF_AFSEL_R = 0;
					 GPIO_PORTF_PCTL_R = 0;
					 GPIO_PORTF_PUR_R = 0x11;/*pull up pins*/
					 GPIO_PORTF_DEN_R = 0x1F;/*digital pins*/
					 GPIO_PORTF_LOCK_R = 0x4C4F434B;/*key to access all pins as gpio pins*/
					 GPIO_PORTF_CR_R = 0x1F;/*unlocked pins and may be modified*/
            break;
        }
        default:
                break;
    }

}
void DIO_voidSetPinDirection(u8 Copy_u8PortName,u8 Copy_u8PinNumber,u8 Copy_u8PinMode)
{
   
    switch(Copy_u8PortName)
    {
        case PORTA:
        {
            if(Copy_u8PinNumber == DIO_INPUT)
            {
                CLR_BIT( GPIO_PORTA_DIR_R,Copy_u8PinNumber);
            }
            else
            {
                SET_BIT(GPIO_PORTA_DIR_R,Copy_u8PinNumber);
            }
            break;
        }
         case PORTB:
        {
            if(Copy_u8PinNumber == DIO_INPUT)
            {
                CLR_BIT( GPIO_PORTB_DIR_R,Copy_u8PinNumber);
            }
            else
            {
                SET_BIT(GPIO_PORTB_DIR_R,Copy_u8PinNumber);
            }
            break;
        }
         case PORTC:
        {
            if(Copy_u8PinNumber == DIO_INPUT)
            {
                CLR_BIT( GPIO_PORTC_DIR_R,Copy_u8PinNumber);
            }
            else
            {
                SET_BIT(GPIO_PORTC_DIR_R,Copy_u8PinNumber);
            }
            break;
        }
         case PORTD:
        {
            if(Copy_u8PinNumber == DIO_INPUT)
            {
                CLR_BIT( GPIO_PORTD_DIR_R,Copy_u8PinNumber);
            }
            else
            {
                SET_BIT(GPIO_PORTD_DIR_R,Copy_u8PinNumber);
            }
            break;
        }
         case PORTE:
        {
            if(Copy_u8PinNumber == DIO_INPUT)
            {
                CLR_BIT( GPIO_PORTE_DIR_R,Copy_u8PinNumber);
            }
            else
            {
                SET_BIT(GPIO_PORTE_DIR_R,Copy_u8PinNumber);
            }
            break;
        }
         case PORTF:
        {
            if(Copy_u8PinNumber == DIO_INPUT)
            {
                CLR_BIT( GPIO_PORTF_DIR_R,Copy_u8PinNumber);
            }
            else
            {
                SET_BIT(GPIO_PORTF_DIR_R,Copy_u8PinNumber);
            }
            break;
        }
        default:
                break;

    }
}
void DIO_voidSetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8PinState)
{
  
	switch(Copy_u8PortName)
	{
		case PORTA:
			if (Copy_u8PinState == DIO_HIGH) // INPUT_PULLUP
			{
				SET_BIT(GPIO_PORTA_DATA_R, Copy_u8PinNumber);
			}
			else		// DIO_LOW		INPUT_NOPULLUP
			{
				CLR_BIT(GPIO_PORTA_DATA_R, Copy_u8PinNumber);
			}
		break;
		
		case PORTB:
			if (Copy_u8PinState == DIO_HIGH) // INPUT_PULLUP
			{
				SET_BIT(GPIO_PORTB_DATA_R, Copy_u8PinNumber);
			}
			else		// DIO_LOW		INPUT_NOPULLUP
			{
				CLR_BIT(GPIO_PORTB_DATA_R, Copy_u8PinNumber);
			}
		break;
        case PORTC:
			if (Copy_u8PinState == DIO_HIGH) // INPUT_PULLUP
			{
				SET_BIT(GPIO_PORTC_DATA_R, Copy_u8PinNumber);
			}
			else		// DIO_LOW		INPUT_NOPULLUP
			{
				CLR_BIT(GPIO_PORTC_DATA_R, Copy_u8PinNumber);
			}
		break;
        case PORTD:
			if (Copy_u8PinState == DIO_HIGH) // INPUT_PULLUP
			{
				SET_BIT(GPIO_PORTD_DATA_R, Copy_u8PinNumber);
			}
			else		// DIO_LOW		INPUT_NOPULLUP
			{
				CLR_BIT(GPIO_PORTD_DATA_R, Copy_u8PinNumber);
			}
		break;
        case PORTE:
			if (Copy_u8PinState == DIO_HIGH) // INPUT_PULLUP
			{
				SET_BIT(GPIO_PORTE_DATA_R, Copy_u8PinNumber);
			}
			else		// DIO_LOW		INPUT_NOPULLUP
			{
				CLR_BIT(GPIO_PORTE_DATA_R, Copy_u8PinNumber);
			}
		break;
        case PORTF:
			if (Copy_u8PinState == DIO_HIGH) // INPUT_PULLUP
			{
				SET_BIT(GPIO_PORTF_DATA_R, Copy_u8PinNumber);
			}
			else		// DIO_LOW		INPUT_NOPULLUP
			{
				CLR_BIT(GPIO_PORTF_DATA_R, Copy_u8PinNumber);
			}
		break;
				default:
							break;

	}
}

