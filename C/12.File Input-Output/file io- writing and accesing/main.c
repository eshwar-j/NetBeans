/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 18 June, 2017, 6:57 PM
 * Description: not working on netbeans
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// Writes records to a file using structure 

int main( )
{
FILE *fp ;
char another = 'Y' ;
struct rom
{
char name[40] ;
int age ;
float bs ;
} ;
struct rom e ;
fp = fopen ( "rom.txt", "w" ) ;
if ( fp == NULL )
{
puts ( "Cannot open file" ) ;
}
while ( another == 'Y' )
{
printf ( "\nEnter name, age and basic salary: " ) ;
scanf ( "%s %d %f", &e.name, &e.age, &e.bs ) ;
fprintf ( fp, "%s %d %f\n", e.name, e.age, e.bs ) ;
printf ( "Add another record (Y/N) " ) ;
fflush ( stdin ) ;
}
fclose ( fp ) ;
}
