/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 27 August, 2017, 2:02 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev,*next;
}DNODE;

DNODE *createList();
DNODE *complement2(DNODE *);
void displayList(DNODE *);

int main()
{
    DNODE *head1;
    printf("Enter 8-bit binary number\n");
    head1=createList();
    displayList(head1);
    printf("\n");
    head1=complement2(head1);
    displayList(head1);
    
}
DNODE *complement2(DNODE *st1)
{
    DNODE *st=st1;
    for(;st->next!=NULL;st=st->next); //reach last node
    while(st->data==0)
        st=st->prev;
    st=st->prev;
    while(st!=NULL)
    {
    if(st->data==0)
        st->data=1;
    else
        st->data=0;
    st=st->prev;
    }
    return st1;
}
DNODE *createList()
{
    DNODE *first=NULL,*last,*temp;
    int i;
    for(i=0;i<8;i++)
    {
        temp=(DNODE*)malloc(sizeof(DNODE));
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