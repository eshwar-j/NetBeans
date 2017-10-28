/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 17 May, 2017
 * Description: demonstrates returning of values
 *----------------------------------------------------------------------------*/

#include <stdio.h>

// Sending and receiving values between functions
main( )
{
int a, b, c, sum ;
printf ( "\nEnter any three numbers\n" ) ;
scanf ( "%d %d %d", &a, &b, &c ) ;
sum = calsum ( a, b, c ) ;		//calsum value will be passed to sum, a,b,c are actual arguments
printf ( "\nSum = %d", sum ) ;
}

calsum ( int x, int y, int z )      // x,y,z are formal arguments
{
int d ;
d = x + y + z ;
return ( d ) ; //this 'd' value will be returned(held) by calsum function
}