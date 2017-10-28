/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 24 June, 2017, 7:06 PM
 * Description:
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
printf("\n");
}
void main()
{
int x=3,c;
printf("left shift  %d ",x);   // left shift 1 to three places. only third bit will be assigned '1'
c=x; //copy x value before modifying it
x=(1<<3);

showbits(x);
printf("right shift %d ",c);   // right shift 1 to 1 places. only fourth bit will be assigned '1'
x=(4>>1);
showbits(x);

}