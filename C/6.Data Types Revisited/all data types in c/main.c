/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 18 May, 2017
 * Description:
 *----------------------------------------------------------------------------*/
 
#include <stdio.h>

int main()
{
char c ;
unsigned char d ;

int i ;
unsigned int j ;
short k ;

unsigned short l ;
long m ;
unsigned long n ;

float x ;
double y ;
long double z ;

// char
printf ( "char and unsigned char\n" ) ;
scanf ( "%c %c", &c, &d ) ;
printf ( "%c %c", c, d ) ;

// int
printf ( "\nint and unsigned int\n" ) ;
scanf ( "%d %u", &i, &j ) ;
printf ( "%d %u", i, j ) ;

// short int
printf ( "\nshort int and unsigned short int\n" ) ;
scanf ( "%d %u", &k, &l ) ;
printf ( "%d %u", k, l ) ;

// long int
printf ( "\nlong int and unsigned long int\n" ) ;
scanf ( "%ld %lu", &m, &n ) ;
printf ( "%ld %lu", m, n ) ;

// float, double, long double
printf ( "\nfloat double and long double\n" ) ;
scanf ( "%f %lf %Lf", &x, &y, &z ) ;
printf ( "%f %lf %Lf", x, y, z ) ;
}