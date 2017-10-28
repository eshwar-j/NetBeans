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