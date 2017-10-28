/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 9 August, 2017, 6:22 PM
 * Description: has bug
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int data;
        struct node *next;
    }NODE;
    
 NODE* createList();
 NODE* reverseList(NODE *);
 void displayList(NODE *);
 
int main()
{
    NODE *head1, *revhead;    //head is a starting address of LL
    head1=createList();
    revhead=reverseList(head1);
    displayList(revhead);
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
NODE* reverseList(NODE *st)
{
    NODE *first=NULL, *last, *temp;
    while(st!=NULL)
    {
        temp=(NODE*)malloc(sizeof(NODE));
        temp->data=st->data;
        temp->next=NULL;            // make next part of temp = NULL
        if(first==NULL)
            first=temp;             // retain first node for handling LL
        else
            temp->next=last;
        last=temp;                  // make this is last node
        st=st->next;
    }return last;
}

void displayList(NODE *st)
{
    while(st!=NULL)
    {
        printf("%d ",st->data);
        st=st->next;
    }
}
