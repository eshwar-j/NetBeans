/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 13 June, 2017, 6:33 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

//Demonstration of passing an entire array to a function 
int main( )
{
int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
display ( &num[0], 6 ) ; // 6 is array size
}
display ( int *j, int n )
{
int i ;
for ( i = 0 ; i <= n - 1 ; i++ )
{
printf ( "\nelement = %d", *j ) ;
j++ ; // increment pointer to point to next element
}
}
