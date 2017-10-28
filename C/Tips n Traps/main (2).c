/*---------------------------------------------------------------------------- 
 * File:   main.c
 * Author: Eshwar jorvekar
 * Created on 12 September, 2017, 10:13 PM
 * Description:
 *----------------------------------------------------------------------------*/
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *i,ar[3]={65,2,3};   // *i is integer pointer variable capable of holding integer address
    i=ar;       // whenever array name is accessed without [], it implies base address of array
    printf("%d",*i);	// print contents at ar[0]
}