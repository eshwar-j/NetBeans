/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 3 August, 2017, 7:21 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    int len;
    gets(str);
    len=strlen(str);
    printf("string length: %d",len);
}

