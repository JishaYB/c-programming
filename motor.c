#include<LPC214X.h>
int main()
{
	IODIR1&=(~(0X01<<16));
		IODIR0|=(0X01<<13);
		IODIR0|=(0X01<<14);
		
		if((1<<16)&IOPIN1)
		{
			IOCLR0|=(1<<13);
		}
		else
		{
			IOSET0|=(1<<13);
		}
	}
			