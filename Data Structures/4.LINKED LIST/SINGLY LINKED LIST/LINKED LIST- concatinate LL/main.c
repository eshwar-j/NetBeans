/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 11 August, 2017, 9:21 AM
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
 NODE* concatList(NODE *, NODE *);
 void displayList(NODE *);
 
int main()
{
    NODE *head1, *head2, *newhead;    //head is a starting address of LL
    head1=createList();
    head2=createList();
    newhead=concatList(head1,head2);
    displayList(newhead);
}

 NODE* concatList(NODE *st1, NODE *st2)
 {
     NODE *t;
     t=st1;
     while(t->next!=NULL)
         t=t->next;
     t->next=st2;
     return st1;
 }
NODE* createList()
{
    int n,i;
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

void displayList(NODE *st)
{
    while(st!=NULL)
    {
        printf("%d ",st->data);
        st=st->next;
    }
}