#include <lpc214x.h>
void delay(unsigned int count);
int main() {

IODIR0 |= (1 << 2);
IODIR0 |= (1 << 4);
IODIR0 |= (1 << 7);
  // Set P0.10 as output

while (1){
        IOSET0 |= (1 << 2);
					delay(500000);
        IOCLR0 |= (1 << 2);	
					IOSET0 |= (1 << 4);
					delay(500000);
	IOCLR0 |= (1 << 4);	
	        IOSET0 |= (1 << 7);
					delay(500000);
	IOCLR0 |= (1 << 7);	
    }
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}

