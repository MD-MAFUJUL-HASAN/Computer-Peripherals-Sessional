
	/**** Single Character ****/
/*	
#include<reg51.h>
void main()
{
	SCON = 0x50 ;		//set serial port to mode 1
	TMOD = 0x20;		//timer1 mode 2
	TH1 = -3 ;			//reload counter for 2400 baud rate
	TR1 = 1;				//start timer1
	SBUF = 'T' ;
	while(TI == 0);
	TI = 0;
}


#include<reg51.h>
#include<stdio.h>
void main()
{
	SCON = 0x52;		//set serial port to mode 1
	TMOD = 0x20;		//timer1 mode 2
	TH1 = -3 ;			//reload counter for 2400 baud rate
	TR1 = 1;				//start timer1
	while(1)
		printf("Mahfuz\n");
}
*/

#include<reg51.h>
#include<stdio.h>
void main()
{
	SCON = 0x52;		//set serial port to mode 1
	TMOD = 0x20;		//timer1 mode 2
	TH1 = -3 ;			//reload counter for 2400 baud rate
	TR1 = 1;				//start timer1
	while(1)
		printf("MD Mafujul Hasan\n");
}
