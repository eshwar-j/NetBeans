/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 17 June, 2017, 6:44 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void main( )
{
struct book		//un-initialised structure
{
char name[10] ;
float price ;
int pages ;
} b1, b2, b3 ;

printf ( "\nEnter names, prices & no. of pages for 3 books\n" ) ;
scanf ( "%s %f %d", &b1.name, &b1.price, &b1.pages ) ;
scanf ( "%s %f %d", &b2.name, &b2.price, &b2.pages ) ;
scanf ( "%s %f %d", &b3.name, &b3.price, &b3.pages ) ;
printf ( "\nBooks entered" ) ;
printf ( "\n%s %f %d", b1.name, b1.price, b1.pages ) ;
printf ( "\n%s %f %d", b2.name, b2.price, b2.pages ) ;
printf ( "\n%s %f %d", b3.name, b3.price, b3.pages ) ;
}

