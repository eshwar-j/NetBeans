/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 24 August, 2017, 9:16 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define M 10

void push(int data);
int pop();
int peek();
int isEmpty();
void display();
// isFull() will not exist because LL will never be full like arrays

typedef struct node
{
    int data;
    struct node *next;
}SNODE;

SNODE *stack=NULL,*top;  //// stack is 1st node and top is last node

int main()
{
    int ch,data;
    
    do
    {
        printf("\n\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Peek");
        printf("\n5. Exit");
        
        printf("\n\tEnter your choice : ");
        scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("Push element : ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            {
                if(!isEmpty())
                    printf("STACK : %d ",pop());
                else
                    printf("STACK is Empty!");
            }
            break;
        case 3:
            display();
            break;
        case 4:
            if(!isEmpty())
            {
                data=peek();
                printf("Top element is %d ",peek());
            }
            else
                printf("STACK is empty!");
            break;
        case 5:
            printf("\n\tThank u.....");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    }while(ch<5);
}

void push(int data)
{
    SNODE *temp; 
    temp=(SNODE*)(malloc(sizeof(SNODE)));
    temp->data=data;
    temp->next=NULL;
    if(stack==NULL)
        stack=temp;
    else
        top->next=temp;
    top=temp;
}

int pop() // 3 cases 1. stack empty 2. one element 3. more than one element
{
    SNODE *t;
    int data;
    if(isEmpty())
    {
        printf("STACK empty!");
        return -99;
    }
    if(stack==top)
    {
        data=stack->data;
        free(stack);
        stack=NULL;
        return data;
    }
    for(t=stack;t->next!=top;t=t->next); //reach last node
    data=top->data;
    free(top);
    t->next=NULL;
    top=t;
    return data;
}

int isEmpty()
{
    if(stack==NULL)  // i.e stack==top
        return 1;
    return 0;
}

int peek()
{
    return top->data;
}

void display()
{
    SNODE *t;
    printf("STACK : ");
    for(t=stack;t!=NULL;t=t->next)
        printf("%d ",t->data);
}