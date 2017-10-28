/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 10 August, 2017, 11:44 AM
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
 NODE* copyList(NODE *);
 void displayList(NODE *);
 
int main()
{
    NODE *head1, *newlist;    //head is a starting address of LL
    head1=createList();
    displayList(head1);
    newlist=copyList(head1);
    printf("\n");
    displayList(newlist);
    
}

NODE* copyList(NODE *st)
{
    NODE *first=NULL, *last, *temp;
    while(st!=NULL)
    {
        temp=(NODE*)malloc(sizeof(NODE));
        temp->data=st->data;
        temp->next=NULL;
        if(first==NULL)
            first=temp;
        else
            last->next=temp;
        last=temp;
        st=st->next;
    }return first;    
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