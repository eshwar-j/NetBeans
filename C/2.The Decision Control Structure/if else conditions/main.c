/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 3 May, 2017
 * Description:
 *----------------------------------------------------------------------------*/
 
#include <stdio.h>

int main()
{
int a,b;
 printf("enter 2 numbers\n");
 scanf("%d %d",&a,&b);
if(a == b)
	 printf("%d=%d",a,b);
//else if(a != b)           commented because if executed, other conditions will not be evaluated
	 //printf("%d not =%d",a,b);
else if(a < b)
	 printf("%d<%d",a,b);
else if(a > b)
	 printf("%d>%d",a,b);
else if(a <= b)
	 printf("%d less than =%d",a,b);
else if(a >= b) 
	 printf("%d greater than =%d",a,b);
}