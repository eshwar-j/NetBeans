/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 07 June, 2017
 * Description: pragma is used for doing various things. example shows doing something at start or exiting
 *----------------------------------------------------------------------------*/

#include <stdio.h>

void fun1( )
{
	printf ( "\nInside fun1" ) ;
}
void fun2( )
{
	printf ( "\nInside fun2" ) ;
}

#pragma startup fun1
#pragma exit fun2
int main( )
{
printf ( "\nInside main" ) ;
}
