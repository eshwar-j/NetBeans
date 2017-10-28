/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 17 June, 2017, 6:47 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void main( )
{
struct book		//initialized structure
{
char name[10] ;
float price ;
int pages ;
} b1={"book1",52.2,2},
  b2={"book2",34.2,2},
  b3={"book3",56.3,3} ;

printf ( "\n%s %f %d", b1.name, b1.price, b1.pages ) ;
printf ( "\n%s %f %d", b2.name, b2.price, b2.pages ) ;
printf ( "\n%s %f %d", b3.name, b3.price, b3.pages ) ;
}

