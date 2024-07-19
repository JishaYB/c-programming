#include <lpc214x.h>
void delay(unsigned int count);
int main()
{
	IODIR0 |= (1 << 1);
IODIR0 |= (1 << 2);
IODIR0 |= (1 << 3);
	IODIR0 |= (1 << 4);
IODIR0 |= (1 << 5);
IODIR0 |= (1 << 6);
	IODIR0 |= (1 << 7);
IODIR0 |= (1 << 8);
	while(1)
	{//IOSET0|=(1<<1);
		//int i;
		int n=1;
		switch(n)
			{
			case 1:
				IOSET0 |=(1<<1);
			  delay(200000);
				IOCLR0 |=(1<<1);
				delay(200000);
			case 2:
					IOSET0 |=(1<<7);
					delay(200000);
				IOCLR0 |=(1<<7);
				delay(200000);
			    
			case 3:
					IOSET0 |=(1<<3);
			    IOSET0|=(1<<4);
					delay(200000);
					IOCLR0|=(1<<3);
					IOCLR0|=(1<<4);
					delay(200000);
			case 4:
				IOSET0|=(1<<8);
					delay(200000);
			IOCLR0|=(1<<8);
					delay(200000);
		}}}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}

