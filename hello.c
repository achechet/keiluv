#include<reg51.h>

void delay()
{
	unsigned int i;
	for (i = 0; i < 50000; i++);
}

void main()
{
	while(1)
	{
		P1 = 0x00;
		delay();
		P1 = 0xff;
		delay();
	}
}