#include<lpc214x.h>
int main()
{
	while(1)
	{
		IODIR1&=(~(0X01<<16));
		IODIR0|=(1<<7);
		if((1<<16)&IOPIN1)
		{
			IOCLR0|=(1<<7);
		}
		else
		{
			IOSET0|=(1<<7);
		}}}