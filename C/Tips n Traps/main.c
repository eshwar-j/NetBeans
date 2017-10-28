/*---------------------------------------------------------------------------- 
 * File:   main.c
 * Author: Eshwar jorvekar
 * Created on 12 September, 2017, 10:20 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i,j,k;
	i=15%3521; // result will be 15
	j=15%2; // result will be 1 because 2 has multiple upto 14 hence remainder is 1
	k=15%3; // result will be 0 as 3 divides 15 exactly
	printf("%d\n",i);
	printf("%d\n",j);
	printf("%d\n",k);
}