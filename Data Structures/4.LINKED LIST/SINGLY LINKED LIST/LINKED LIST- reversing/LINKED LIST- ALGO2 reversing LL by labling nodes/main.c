/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 9 August, 2017, 9:34 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int data;
        struct node *next;
    }NODE;
    
 NODE* createList();
 void reverseList(NODE *);
 
int main()
{
    NODE *head1;    //head is a starting address of LL
    head1=createList();
    reverseList(head1);
}

NODE* createList()
{
    int i,n;
    NODE *first, *last, *temp;
    printf("enter no. of nodes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=(NODE*)malloc(sizeof(NODE));
        printf("enter element %d\n",i);
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(i==0)
            first=temp;
        else
            last->next=temp;
        last=temp;
    }return first;
}
void reverseList(NODE *st)
{
    NODE *t=st, *t1;
    while(t->next!=NULL)
        t=t->next;
    printf("%d ",t->data);
    while(t!=st)
    {
        t1=st;
    while(t1->next!=t)
        t1=t1->next;
        printf("%d ",t1->data);
        t=t1;
    }
}
