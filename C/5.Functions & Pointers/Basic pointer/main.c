/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 16 May, 2017
 * Description:
 *----------------------------------------------------------------------------*/
 
#include <stdio.h>

int main()
{
int i = 3 ;
printf ( "\nAddress of i = %u", &i ) ;
printf ( "\nValue of i = %d", i ) ;
printf ( "\nValue of i = %d", *(&i)) ;
}