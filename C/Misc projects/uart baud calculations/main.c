/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 10 July, 2017, 9:53 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define Pclk 60000000   //CPU clock
#define Baud 9600       // Desired baud rate
#define MULVAL 1
#define DIVADDVAL 0
int main()
{
    unsigned int UxDLL,baud;
    UxDLL=(Pclk/(16*Baud));
    if(UxDLL<255)
    {
        baud=(Pclk)/(16*UxDLL);
        printf("UxDLM    |    UxDLL     Req. Baud  = %d\n",Baud);
        printf("  0      |     %d      Calc. Baud = %d\n",UxDLL,baud);
        printf("MULVAL   |  DIVADDVAL                   ok!\n");
        printf("  1      |     0\n");
    }
    if(UxDLL>255)
    {
        printf("\nUxDLL out of bounds, failed...\nTrying method 2\n");
        UxDLL=UxDLL-256;
        baud=(Pclk)/(16*(256+UxDLL));
        printf("UxDLM    |    UxDLL     Req. Baud  = %d\n",Baud);
        printf("  1      |     %d      Calc. Baud = %d\n",UxDLL,baud);
        printf("MULVAL   |  DIVADDVAL                   ok!\n");
        printf("  1      |     0\n");
        
    }  
}

