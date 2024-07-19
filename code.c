#include <lpc214x.h>
void delay(unsigned int count);
int main()
{
	IODIR0 |= (1 << 1);
IODIR0 |= (1 << 2);
IODIR0 |= (1 << 3);
	while(1)
	{
		int i;
		int n=1;
		switch(n)
		{
			case 1:
				IOSET0 |=(1<<1);
			  delay(500000);
			 IOCLR0|=(1<<1);
			case 2:IOSET0 |=(1<<1);
			   delay(500000);
			      IOSET0|=(1<<2);
			delay(500000);
			 IOCLR0|=(1<<1);
			 IOCLR0|=(1<<2);
			case 3:
				IOSET0 |=(1<<1);
			   delay(500000);
			      IOSET0|=(1<<2);
			delay(500000);
			IOSET0|=(1<<3);
				delay(500000);
			IOCLR0|=(1<<1);
			 IOCLR0|=(1<<2);
			IOCLR0|=(1<<3);
		}
	}
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}