/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 10 September, 2017, 1:11 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *i,ar[3]={65,2,3};   // *i is integer pointer variable capable of holding integer address
    i=ar;       // whenever array is used without [], it implies base address of array
    printf("%d",*i);
}