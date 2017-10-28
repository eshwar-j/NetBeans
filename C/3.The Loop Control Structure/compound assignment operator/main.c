/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 5 May, 2017
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
int i;
printf("Enter number to add to 10\n");
scanf("%d",&i);
i+=10;		// same as i=i+10. Other compound assignment operators are -=, *=, / = and %=
printf("%d",i);
}