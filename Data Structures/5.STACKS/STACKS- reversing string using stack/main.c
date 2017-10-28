/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 4 September, 2017, 8:37 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    int i;
    char ch,str[10];
    printf("Enter string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        push(str[i]);
    while(!isEmpty())
    {
        ch=pop();
        printf("%c",ch);
    }
}
