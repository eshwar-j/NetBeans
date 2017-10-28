/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 19 june, 2017, 7:01 PM
 * Description: not compatible with netbeans IDE
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <conio.h>

// File-copy program which copies text, .com and .exe files 
#include "fcntl.h"
#include"c:tc\\include\\sys\\types.h"
#include "stat.h" // if present in sys directory use "c:\\tc\\include\\sys\\stat.h"
main ( int argc, char *argv[ ] )
{
char buffer[ 512 ], source [ 128 ], target [ 128 ] ;
int inhandle, outhandle, bytes ;
printf ( "\nEnter source file name" ) ;
gets ( source ) ;
inhandle = open ( source, O_RDONLY | O_BINARY ) ;
if ( inhandle == -1 )
{
puts ( "Cannot open file" ) ;
exit( ) ;
}
printf ( "\nEnter target file name" ) ;
gets ( target ) ;
outhandle = open ( target, O_CREAT | O_BINARY | O_WRONLY,
S_IWRITE ) ;
if ( inhandle == -1 )
{
puts ( "Cannot open file" ) ;
close ( inhandle ) ;
exit( ) ;
}
while ( 1 )
{
bytes = read ( inhandle, buffer, 512 ) ;
if ( bytes > 0 )
write ( outhandle, buffer, bytes ) ;
else

break ;
}
close ( inhandle ) ;
close ( outhandle ) ;

getch();
clrscr();
}

