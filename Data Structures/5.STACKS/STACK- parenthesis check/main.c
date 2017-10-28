/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 23 August, 2017, 9:53 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
int main()
{
    int i;
    char str[20];
    printf("Enter string statement\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
      if(str[i]=='('||str[i]=='['||str[i]=='{')
          push(str[i]);
      if(str[i]==')')
      {
          if(pop()!='(')
          {
              printf("\nExpression error");
              return;
          }
      }
      if(str[i]==']')
      {
          if(pop()!='[')
          {
              printf("\nExpression error");
              return;
          }
      }
      if(str[i]=='}')
      {
          if(pop()!='{')
          {
              printf("\nExpression error");
              return;
          }
      }
    }
    if(isEmpty())
        printf("\nNo errors");
    else
        printf("\nExpression error");
}
