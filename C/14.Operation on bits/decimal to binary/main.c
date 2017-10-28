/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 20 June, 2017, 7:12 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int n, c, k;
  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);
  printf("%d in binary number system is:\n", n);
  for (c = 2; c >= 0; c--)  		// c is word length we want
  {
    k = n >> c;
    if (k & 1) printf("1");
	else printf("0");
  }
}
