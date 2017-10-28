/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 3 August, 2017, 9:49 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include<stdlib.h>

typedef struct node
    {
        int data;
        struct node *next;
    }NODE;
    
int main()
{
    int i;
    NODE *first, *last, *temp;
    first=(NODE*)malloc(sizeof(NODE));
    printf("enter 1st element\n");
    scanf("%d",&first->data);
    first->next=NULL;
    last=first;
    printf("Add more elements?\nY:1 N:0\n");
    scanf("%d",&i);
    while(i)
    {
        i=0;
        temp=(NODE*)malloc(sizeof(NODE));
	printf("enter element\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	last->next=temp;
	last=temp;
	printf("Add more elements?\nY:1 N:0\n");
	scanf("%d",&i);
    }
    while(first!=NULL)      // prints collected nodes
    {
        printf("%d ",first->data);
        first=first->next;
    }
}
