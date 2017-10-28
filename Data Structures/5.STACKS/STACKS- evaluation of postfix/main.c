/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 4 September, 2017, 8:37 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(int data);
int pop();
int eval(int v1, char op, int v2 );

int main()
{
    int i,p1,p2,result,val;
    char postfix[M],ch;
    printf("Enter Postfix expression\n");
    gets(postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        ch=postfix[i];
        if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
        {
            p1=pop();
            p2=pop();
            result=eval(p2,ch,p1);
            push(result);
            continue;
        }
        printf("Enter value for %c : ",ch);
        scanf("%d",&val);
        push(val);
    }
    printf("\nAns: %d",pop());
}

void push(int data)
{
    stack[top]=data;
    top++;
}
int pop()
{
    top--;
    return stack[top];
}

int eval(int v1, char op, int v2)
{
    switch(op)
    {
        case'+': return v1+v2;
            break;
        case'-': return v1-v2;
            break;
        case'*': return v1*v2;
            break;
        case'/': return v1/v2;
            break;
        case'^': return pow(v1,v2);
    }
    return 0;
}