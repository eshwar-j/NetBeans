/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 4 September, 2017, 9:21 PM
 * Description: Linear queue
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define M 20 // queue size

void enQue(int data); // -- modified for circular Q
int deQue();    // -- modified for circular Q
int isFull(); // -- modified for circular Q
int isEmpty(); // -- modified for circular Q
void display(); // -- modified for circular Q

int queue[M], front=0, rear=0,data,cnt=0;

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
    if(isFull())
    {
        printf("\nQueue full!\n");
        return;
    }
    else
    {
        queue[rear]=data;
        rear++;
        cnt++; // count no of filled positions
        if(rear==M)
            rear=0;
    }
}
int deQue()
{
    data=queue[front];
    front++;
    cnt++;
    if(front==M)
        front=0;
    return data;
}
void display()
{
    int i,j=front;
    printf("\nQUEUE :");
    for(i=0;i<cnt;i++)
    {
        printf(" %d",queue[j]);
        j++;
        if(j==M)
            j=0;
    }
}
int isFull()
{
    if(cnt==M)
        return 1;
    return 0;
}

int isEmpty()
{
    if(cnt==0)
        return 1;
    return 0;
}