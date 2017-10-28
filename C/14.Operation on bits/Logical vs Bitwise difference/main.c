/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 26 June, 2017, 7:08 PM
 * Description: program shows difference between logical and bitwise AND
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>




showbits ( int n )
{
int i, k, andmask ;
for ( i = 15 ; i >= 0 ; i-- )
{
andmask = 1 << i ;
k = n & andmask ;
k == 0 ? printf ( "0" ) : printf ( "1" ) ;
}
}
void main()
{
int a,b,c;
printf("input two numbers\n");
scanf("%d %d",&a,&b);

c=a&b;

printf("\t %d  ",a);
showbits(a);
printf("\n");

printf("\t %d  ",b);
showbits(b);
printf("\n");

printf("bitwise AND ",c);
showbits(c);
printf("\n");

c=a&&b;
printf("logical AND ",c);
showbits(c);
}