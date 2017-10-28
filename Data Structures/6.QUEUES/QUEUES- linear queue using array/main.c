/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 4 September, 2017, 8:37 PM
 * Description: Linear queue
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define M 20 // queue size

void enQue(int data);   // enqueue at rear
int deQue();    // dequeue from front
int isFull();
int isEmpty();
void display();

int queue[M], front=0, rear=0,data;

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
                    printf("\nQueue empty!");
                break;    
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }while(ch!=4);
}
void enQue(int data)
{
    if(isFull())
    {
        printf("\nQueue full!");
        return;
    }
    else
    {
        queue[rear]=data;
        rear++;
    }
}
int deQue()
{
    data=queue[front];
    front++;
    return data;
}
void display()
{
    int i;
    printf("\nQUEUE :");
    for(i=front;i<rear;i++)
        printf(" %d",queue[i]);
}
int isFull()
{
    if(rear==M)
        return 1;
    return 0;
}

int isEmpty()
{
    if(front==rear)
        return 1;
    return 0;
}