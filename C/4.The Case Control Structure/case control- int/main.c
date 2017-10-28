/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 6 May, 2017
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
int i;
printf("Enter 1 6 or 120\n");
scanf("%d",&i);
switch ( i )
{
case 1 :
printf ( "I am in case 1 \n" ) ;
break ;
case 6 :
printf ( "I am in case 6 \n" ) ;
break ;
case 120 :
printf ( "I am in case 120 \n" ) ;
break ;
default :
printf ( "unexpected value \n" ) ;
}
}