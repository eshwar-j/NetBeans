/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 13 June, 2017
 * Description: Demonstration of call by reference
 *----------------------------------------------------------------------------*/
 
#include<stdio.h>

 main( )
{ 
int i;
int marks[] = { 55, 65, 75, 56, 78, 78, 90 };
for ( i = 0 ; i <= 6 ; i++ ) 
disp ( &marks[i] );     // in call by reference, addresses are passed and changes in that variable are reflected back
}
disp ( int *n )
{ 
printf ( "%d ", *n );
}