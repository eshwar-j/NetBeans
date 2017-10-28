/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 18 June, 2017, 6:52 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// Display contents of a file on screen.

void main( )
{
FILE *fp ;
char ch ;
fp = fopen ( "rom.txt", "r" ) ;		//function opens file

if ( fp == NULL )
	printf("error opening file");		//error checking

while ( 1 )

ch = fgetc ( fp ) ;				//function reads character from file
if ( ch == EOF )
break ;
printf ( "%c", ch ) ;
}
fclose ( fp ) ;		//closes file
}