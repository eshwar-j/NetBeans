/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 17 May, 2017
 * Description: demonstrates returning of values
 *----------------------------------------------------------------------------*/

#include <stdio.h>

main( )
{
int a, b, sum ;
printf ( "\nEnter 2 numbers\n" ) ;
scanf ( "%d %d", &a, &b ) ;
sum = addn ( a, b ) ;
printf ( "\nSum = %d", sum ) ;
}

addn ( int x, int y )
{
int temp ;
temp = x + y ;
return ( temp ) ; //this 'temp' value will be returned(held) by addn function to pass to variable sum
}