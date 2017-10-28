
/*---------------------------------------------------------------------------- 
 * File:   main.c
 * Author: Eshwar Jorvekar
 * Created on 28 June, 2017, 4:43 PM
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //demonstrates float=> int demotion and int=> float promotion
    int i;
    float f=1.0;
    printf ("enter integer to promote ");
    scanf("%d",&i);
    f=i*f;
    printf ("integer %d promoted to %f ",i, f);
}

