/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 6 May, 2017
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
char c;
printf("Enter 'a' 'b' or 'c'\n");
scanf("%c",&c);
switch ( c )
{
case 'a' :
printf ( "I am in case A \n" ) ;
break ;
case 'b' :
printf ( "I am in case B \n" ) ;
break ;
case 'c' :
printf ( "I am in case C \n" ) ;
break ;
default :
printf ( "unexpected value \n" ) ;
}
}