/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 27 August, 2017, 1:08 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next, *prev;
}DNODE;

DNODE *createList();
DNODE *binAdd(DNODE *,DNODE *);
void displayList(DNODE *);

int main()
{
    DNODE *head1,*head2,*head3;
    printf("Enter 1st 8-bit binary\n");
    head1=createList();
    printf("Enter 2nd 8-bit binary\n");
    head2=createList();
    head3=binAdd(head1,head2);
    displayList(head1);
    printf("\n");
    displayList(head2);
    printf("\n");
    displayList(head3);
}
DNODE *binAdd(DNODE *st1,DNODE *st2)
{
    int c=0,sum;
    DNODE *first=NULL, *last, *temp;
    while(st1->next!=NULL)
    {
        st1=st1->next;
        st2=st2->next;
    }
    while(st1!=NULL)
    {
    temp=(DNODE*)malloc(sizeof(DNODE));
    sum=st1->data+st2->data+c;
    if(sum==0)
    {
        temp->data=0;
        c=0;
    }
    if(sum==1)
    {
        temp->data=1;
        c=0;
    }
    if(sum==2)
    {
        temp->data=0;
        c=1;
    }
    if(sum==3)
    {
        temp->data=1;
        c=1;
    }
    temp->next=NULL;
    temp->prev=NULL;
    if(first==temp)
        first=temp;
    else
    {
        last->prev=temp;
        temp->next=last;
    }
    last=temp;
    st1=st1->prev;
    st2=st2->prev;
    }
    return temp;
}
DNODE *createList()
{
    int i;
    DNODE *first=NULL, *last, *temp;
    for(i=0;i<8;i++)
    {
        temp=(DNODE *)malloc(sizeof(DNODE));
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(first==NULL)
            first=temp;
        else
        {
            last->next=temp;
            temp->prev=last;
        }
        last=temp;
    }
    first->prev=NULL;
    last->next=NULL;
    return first;
}
void displayList(DNODE *st)
{
    for(;st!=NULL;st=st->next)
        printf("%d ",st->data);
}