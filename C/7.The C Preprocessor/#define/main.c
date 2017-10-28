/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 15 June, 2017
 * Description:
 *----------------------------------------------------------------------------*/
 
#include <stdio.h>

//#define pi 3.14
int main()
{
float r,x;
printf("enter radius\n");
scanf("%f",&r);
#ifdef pi
x=2*pi*r;
#else
printf("pi undefined");
#endif
printf("\ncircumference=%f",x);
}
