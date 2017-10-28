/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 5 May, 2017
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
int i;
printf("Enter number between 10 and 15\n");
scanf("%d",&i);
while ( i >= 10 && i <= 15 )
{
printf("infinite loop trap!");
}
printf("it was a trap!");
}