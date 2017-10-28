/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 3 May, 2017
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
 char a,b,t;
 printf("enter the char");
 scanf("%c",&t);
 b=(t=='x'?printf("'x' is entered"):printf("something else than 'x' is entered"));
}