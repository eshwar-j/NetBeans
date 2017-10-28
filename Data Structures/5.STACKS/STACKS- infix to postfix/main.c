/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 28 August, 2017, 9:35 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <string.h>

int ICP(char op);
int ISP();

int main()
{
    int i,ispval,icpval;
    char infix[M],ch,ch1;
    printf("Enter Infix expression\n");
    gets(infix);
    for(i=0;i<strlen(infix);i++)   // do for expression length
    {
        ch=infix[i];
        if(ch=='(')     //point no. 2
        {
            push(ch);
            continue;
        }
        if(ch==')')     // point no. 3
        {
            ch1=pop();
            while(ch1!='(')
                printf("%c",ch1);
            continue;
        }
        if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^') // point no. 4
        {
            if(isEmpty()||peek()=='(') // point 4a
            {
                push(ch);
                continue;
            }
        ispval=ISP();
        icpval=ICP(ch);
        if(ispval>icpval) // point 4b
        {
            ch1=pop();
            printf("%c",ch1);
            i--;
            continue;
        }
        if(icpval>ispval) // point 4c
        {
            push(ch);
            continue;
        }
    }
        printf("%c",ch);
    }
    while(!isEmpty()) // pop and print until stack is empty
    {
        ch1=pop();
        printf("%c",ch1);
    }
}

int ISP()
{
    switch(peek())
    {
        case'+': return 2;
            break;
        case'-': return 2;
            break;
        case'*': return 4;
            break;
        case'/': return 4;
            break;
        case'^': return 5;
    }
}
int ICP(char op)
{
    switch(op)
    {
        case'+': return 1;
            break;
        case'-': return 1;
            break;
        case'*': return 3;
            break;
        case'/': return 3;
            break;
        case'^': return 6;
    }
}