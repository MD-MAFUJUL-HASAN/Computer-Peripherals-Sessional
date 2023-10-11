/*----

		// Wave drive Mode

#include<reg51.h>
void ms_delay(unsigned int t) //To create a delay of 200 ms = 200 x 1ms
    {
    unsigned i,j ;
    for(i=0;i<t;i++)       //200 times 1 ms delay
    for(j=0;j<1275;j++);   //1ms delay
    }
void main()
{
    while(1) // To repeat infinitely
    {
        P2=0x08;           //P2 = 0000 1000 First Step
        ms_delay(200);
        P2=0x04;           //P2 = 0000 0100 Second Step
        ms_delay(200);
        P2=0x02;           //P2 = 0000 0010 Third Step
        ms_delay(200);
        P2=0x01;           //P2 = 0000 0001 Fourth Step
        ms_delay(200);
    }
}

----*/



			// Full drive Mode

#include<reg51.h>
void ms_delay(unsigned int t) //To create a delay of 200 ms = 200 x 1ms
    {
    unsigned i,j ;
    for(i=0;i<t;i++)       //200 times 1 ms delay
    for(j=0;j<1275;j++);   //1ms delay
    }
void main()
{
    while(1) // To repeat infinitely
    {
        P2=0x0C;           //P2 = 0000 1000 First Step
        ms_delay(200);
        P2=0x06;           //P2 = 0000 0100 Second Step
        ms_delay(200);
        P2=0x03;           //P2 = 0000 0010 Third Step
        ms_delay(200);
        P2=0x09;           //P2 = 0000 0001 Fourth Step
        ms_delay(200);
    }
}



/*-----

// Half Drive Mode
#include<reg51.h>
void ms_delay(unsigned int t)  //To create a delay of 200 ms = 200 x 1ms
    {
    unsigned i,j ;
    for(i=0;i<t;i++)    
    for(j=0;j<1275;j++);
    }
void main()
{
    while (1) 
    {
        P2 = 0x08;         //P2 = 0000 1000 First Step
        ms_delay(200);
        P2 = 0x0C;         //P2 = 0000 1100 Second Step
        ms_delay(200);
        P2 = 0x04;         //P2 = 0000 0100 Third Step
        ms_delay(200);
        P2 = 0x06;         //P2 = 0000 0110 Fourth Step
        ms_delay(200);
        P2 = 0x02;         //P2 = 0000 0010 Fifth Step
        ms_delay(200); 
        P2 = 0x03;         //P2 = 0000 0011 Sixth Step
        ms_delay(200); 
        P2 = 0x01;         //P2 = 0000 0001 Seventh Step
        ms_delay(200); 
        P2 = 0x09;         //P2 = 0000 1001 Eight Step
        ms_delay(200); 
    }
}


-----*/