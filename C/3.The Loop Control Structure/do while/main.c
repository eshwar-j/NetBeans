/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 5 May, 2017
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
char another ;
int num ;
do
{
printf ( "Enter a number\n" ) ;
scanf ( "%d", &num ) ;
printf ( "square of %d is %d", num, num * num ) ;
printf ( "\nWant to enter another number y/n " ) ;
scanf ( " %c", &another ) ;
} while ( another == 'y' ) ;
}