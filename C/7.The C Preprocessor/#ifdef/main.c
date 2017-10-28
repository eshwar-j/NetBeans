/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 01 June, 2017
 * Description:
 *----------------------------------------------------------------------------*/
 
#include<stdio.h>

#define pi 3.14
int main()
{
float r,x;
printf("enter circle radius\n");
scanf("%f",&r);
#ifdef pi
x=2*pi*r;
#endif
printf("circumference=%f",x);
}