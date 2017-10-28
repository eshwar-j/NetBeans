/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 13 June, 2017
 * Description: Arithmetic on array elements
 *----------------------------------------------------------------------------*/
 
#include <stdio.h>

main() 
{ 
int arr[ ] = { 10, 20, 30, 45, 67, 56, 74 };		//integer array declaration with initialization
int *i, *j;
i = &arr[1]; 
j = &arr[5]; 
printf ( "%d %d", j - i, *j - *i );
}
