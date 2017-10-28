
/*--------------------------------------------------------------------------------------------------- 
 * File:   stack.h
 * Author: Eshwar
 *
 * Created on 22 August, 2017, 9:37 PM
 *--------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define M 20

//void push(int data); modified after main
//int pop(); modified after main
int peek();
int isFull();
int isEmpty();
void display();

int stack[M],top=0;

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

int peek()
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
