/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 9 August, 2017, 9:02 PM
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
 NODE* insertNode(NODE *);
 void displayList(NODE *);
 
int main()
{
    NODE *head1, *newhead;    //head is a starting address of LL
    head1=createList();
    newhead=insertNode(head1);
    displayList(newhead);
}

 NODE* insertNode(NODE *st)
 {
     int ele,pos,i;
     NODE *t, *t1;
     printf("enter element and position\n");
     scanf("%d %d",&ele,&pos);
     t=(NODE*)malloc(sizeof(NODE));
     t->data=ele;
     if(pos==1)
     {
         t->next=st;
         return t;
     }
     else
     {
         t1=st;
         for(i=0;i<pos-2;i++)
             t1=t1->next;
         t->next=t1->next;
         t1->next=t;
     }return st;
     
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