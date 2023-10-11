#include<reg51.h>

sbit LED = P2^0;
sbit LED1 = P2^3;
sbit LED2 = P2^6;

void delay()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10000;j++)
		{
		}
	}
}
void main()
{
	while(1)
	{
		LED = 0;
		LED1 = 0;
		LED2 = 0;
		delay();
		LED = 1;
		LED1 = 1;
		LED2 = 1;
		delay();
	}
}