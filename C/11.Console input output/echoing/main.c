/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 18 June, 2017, 6:50 PM
 * Description: program incompatible with netbeans IDE, run on turbo c++
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <conio.h>

main( )
{
char ch ;
printf ( "\nPress any key to continue" ) ;
getch( ) ; // does not echo the character 

printf ( "\nType a character " ) ;
ch = getche( ) ; // echoes the character typed 

printf ( "\nType a string " ) ;
getchar( ) ; // will echo string, must be followed by enter key 

printf ( "\nProgram will now exit" ) ;
fgetchar( ) ; // will echo character, must be followed by enter key

getch();
clrscr();
}