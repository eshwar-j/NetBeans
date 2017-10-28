/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 22 August, 2017, 8:55 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define M 4

void push(int data);
int pop();
int peek();
int isFull();
int isEmpty();
void display();

int stack[M],top=0;

int main()
{
    int ch,ele;
    
    do
    {
        printf("\n\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Peek");
        printf("\n5. Exit");
        
        printf("\n\tEnter ur choice : ");
        scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("Push element : ");
            scanf("%d",&ele);
            push(ele);
            break;
        case 2:
            {
                if(!isEmpty())
                    printf("STACK : %d ",pop());
                else
                    printf("STACK is Empty....");
            }
            break;
        case 3:
            display();
            break;
        case 4:
            if(!isEmpty())
            {
                ele=peek();
                printf("Top element is %d ",ele);
            }
            break;
        case 5:
            printf("\nExiting");
            break;
        default:
            printf("Invalid choice\n");
    }
    }while(ch!=5);
}

void push(int data)
{
    if(isFull())
    {
        printf("Stack is full!");
        return ;
    }
    stack[top]=data;
    top++;
}

int pop()
{
    if(isEmpty())
    {
        printf("Stack is empty!\n");
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
    if(top<=0)
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
        printf("%d ",stack[i]);
}