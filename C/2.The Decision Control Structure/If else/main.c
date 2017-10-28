/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 3 May, 2017, 5:11 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
 printf("enter any number below 4\n");
 scanf("%d",&a);
 if(a==1)
	 printf("one");
 else if(a==2)
	 printf("two");
 else if(a==3)
	 printf("three");
 else if(a==4)
	 printf("four");
 else if(a>4)
	 printf("out of bounds");
}
