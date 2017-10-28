

/*---------------------------------------------------------------------------- 
 * File:   main.c
 * Author: Eshwar Jorvekar
 * Created on 28 June, 2017, 4:55 PM
 * Note: Pclk must be multiple of XTAL.
 *       program provides only M & P values, actual values to load are minus 1
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define XTAL 12 //External crystal in MHz
#define CCLK 60 //Desired cpu clock in MHZ

int main()
{
    int i,M,P1,Fcco;
    float P;
    M=CCLK/XTAL;
    printf("Calculation values\n");
    for(i=0;i<5;i++)
    {
    P=156.0/(2*CCLK);
    P1=P+i;
    Fcco=2*CCLK*P1;
    if(((Fcco>156)&&(Fcco<320)))
    {
    printf("M=%d P=%d\nFcco=%dMhz (in range)",M,P1,Fcco);
    printf("\nActual load values in binary\nP=%d M=000%d",P1-1,M-1);
    }
    }
}