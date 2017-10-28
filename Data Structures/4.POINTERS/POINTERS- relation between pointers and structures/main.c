/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 10 September, 2017, 1:56 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    int *xp;
}ABC;

int main()
{
    ABC a1;
    ABC *ap;
    ap=&a1;
    a1.a=5;
    a1.xp=&a1.a;
    printf("%d \n",*(a1.xp));
    printf("%d \n",*((*ap).xp));
    printf("%d \n",ap->xp);
}

