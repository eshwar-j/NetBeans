/*---------------------------------------------------------------------------- 
 * File:   main.c
 * Author: Eshwar jorvekar
 * Created on 5 July, 2017, 4:13 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

 enum week {sun=1, mon, tue, wed, thu, fri, sat};

int main() 
{
    int w;
    enum week day;
    printf("enter day (1-7)");
    scanf("%d",&w);
    day=w;
     if((day==sun)||(day==sat))
         printf("weekend");
     else
         printf("not weekend");
}