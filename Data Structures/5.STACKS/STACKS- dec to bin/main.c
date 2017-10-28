/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 22 August, 2017, 9:37 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    int n;
    printf("Enter decimal\n");
    scanf("%d",&n);
    while(n>0)
    {
        push(n%2);
        n=n/2;
    }
    while(!isEmpty())
    {
        printf("%d",pop());
    }
}

