/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 4 September, 2017, 10:53 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void enQue(int data);   // enqueue at first
int deQue();    // dequeue from first
// int isFull(); queue will never be full in LL
int isEmpty();
void display();

typedef struct node
{
    int data;
    struct node *next;
}QNODE;

QNODE *front=NULL,*rear=NULL;
int data;

int main()
{
    int ch;
    do{
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice\n");
        scanf("%d",&ch); 
        switch(ch)
        {
            case 1:
                printf("\nQueue Element : ");
                scanf("%d",&data);
                enQue(data);
                break;
            case 2:
                if(!isEmpty())
                {
                    data=deQue();
                    printf("\nQUEUE : %d",data);
                }
                else
                    printf("\nQueue empty!\n");
                break;    
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }while(ch!=4);
}
void enQue(int data)
{
    QNODE *temp;
    temp=(QNODE*)malloc(sizeof(QNODE));
    temp->data=data;
    temp->next=NULL;
    if(rear==NULL)
    {
        front=temp;
        rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}
int deQue()     // 3 cases 1. queue empty(handled in main) 2. one element 3. more than one element
{
    QNODE *temp;
    if(front==rear) // case 2
    {
        data=front->data;   //save data from front
        free(front);    // free front
        front=NULL;
        rear=NULL;
        return data;
    }
    data=front->data;      // case 3
    temp=front;
    front=front->next;
    free(temp);
    return data;
}
void display()
{
    QNODE *st;
    printf("\nQUEUE : ");
    for(st=front;st!=NULL;st=st->next)
        printf(" %d",st->data);
}
int isEmpty()
{
    if(front==NULL)
        return 1;
    return 0;
}