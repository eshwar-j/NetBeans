/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 19 August, 2017, 9:25 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int data;
        struct node *prev;
        struct node *next;
    }DNODE;
    
 DNODE *createList();
 void displayList(DNODE *);
 
int main()
{
    DNODE *head1;
    head1=createList();
    displayList(head1);
}

DNODE *createList()
{
    int n,i;
    DNODE *first=NULL, *last, *temp;
    printf("enter no. of nodes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=(DNODE*)malloc(sizeof(DNODE));
        printf("enter element %d\n",i);
        scanf("%d",&temp->data);
        if(first==NULL)
            first=temp;
        else
        {
            last->next=temp;
            temp->prev=last;
        }
        last=temp;
    }
    last->next=first;
    first->prev=last;
    return first;
}
void displayList(DNODE *st)
{
    DNODE *st1=st;
    do
    {
        printf("%d ",st->data);
        st=st->next;
    }while(st!=st1);
}