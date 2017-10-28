
/*--------------------------------------------------------------------------------------------------- 
 * File:   stack.h
 * Author: Eshwar
 *
 * Created on 22 August, 2017, 9:37 PM
 *--------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define M 20

void push(char data);
char pop();
char peek();
int isFull();
int isEmpty();
void display();

char stack[M],top=0;

void push(char data)
{
    if(isFull())
    {
        printf("Stack is full!");
        return ;
    }
    stack[top]=data;
    top++;
}

char pop()
{
    if(isEmpty())
    {
        printf("Stack is empty!");
        return -99;
    }
    top--;
    return stack[top];
}

int isFull()
{
    if(top==M)
        return 1;
    return 0;
}

int isEmpty()
{
    if(top==0)
        return 1;
    return 0;
}

char peek()
{
    return stack[top-1];
}

void display()
{
    int i;
    printf("STACK : ");
    for(i=0;i<top;i++)
        printf("%c ",stack[i]);
}
