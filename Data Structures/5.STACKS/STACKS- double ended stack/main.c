/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 15 September, 2017, 9:54 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define M 10

void push1(int data);
int pop1();
int isFull1();
int isEmpty1();
void display1();

void push2(int data);
int pop2();
int isFull2();
int isEmpty2();
void display2();

int stack[M],top1=0, top2=M-1;

int main()
{
    int ch,ele;
    do{
    printf("\n1. push 1");
    printf("\n2. push 2");
    printf("\n3. pop 1");
    printf("\n4. pop 2");
    printf("\n5. display 1");
    printf("\n6. display 2");
    printf("\n7. Exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            printf("\nPush element : ");
            if(!isFull1())
            {
                scanf("%d",&ele);
                push1(ele);
            }
            else
                printf("\nstack full");
            break;
        case 2:
            printf("\nPush element : ");
            if(!isFull2())
            {
                scanf("%d",&ele);
                push2(ele);
            }
            else
                printf("\nstack full");
            break;
        case 3:
            if(isEmpty1())
                printf("\nstack empty");
            else
            {
                ele=pop1();
                printf("POP 1 : %d",ele);
            }
            break;
        case 4:
            if(isEmpty2())
                printf("\nstack empty");
            else
            {
                ele=pop2();
                printf("POP 2 : %d",ele);
            }
            break;
        case 5: display1();
            break;
        case 6: display2();
            break;
        case 7: printf("\nExiting...");
            return -99;
    }
    }while(ch!=7);
}
void push1(int data)
{
    if(isFull1())
    {
        printf("\nstack is full");
        return;
    }
    stack[top1]=data;
    top1++;
}
void push2(int data)
{
    if(isFull2())
    {
        printf("\nstack is full");
        return;
    }
    stack[top2]=data;
    top2--;
}
int pop1()
{
    if(isEmpty1())
    {
        printf("\nstack is empty");
        return;
    }
    top1--;
    return stack[top1];
}
int pop2()
{
    if(isEmpty2())
    {
        printf("\nstack is empty");
        return;
    }
    top2++;
    return stack[top2];
}
int isFull1()
{
    if(top1==top2)
        return 1;
    return 0;
}
int isFull2()
{
    if(top1==top2+1)
        return 1;
    return 0;
}
int isEmpty1()
{
    if(top1==0)
        return 1;
    return 0;
}
int isEmpty2()
{
    if(top2==M-1)
        return 1;
    return 0;
}
void display1()
{
    int i;
    printf("\nSTACK 1: ");
    for(i=0;i<top1;i++)
        printf("%d ",stack[i]);
}
void display2()
{
    int i;
    printf("\nSTACK 2: ");
    for(i=M-1;i>top2;i--)
        printf("%d ",stack[i]);
}