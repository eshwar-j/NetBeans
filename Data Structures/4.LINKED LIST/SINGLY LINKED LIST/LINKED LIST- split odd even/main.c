/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 9 August, 2017, 11:53 PM
 * Description: Splits LL into separate odd LL and even LL
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int data;
        struct node *next;
    }NODE;
    
 NODE* createList();
 NODE* splitOdd(NODE *);
 NODE* splitEven(NODE *);
 void displayList(NODE *);
 
int main()
{
    NODE *head1, *oddlist, *evenlist;    //head is a starting address of LL
    head1=createList();
    displayList(head1);
    oddlist=splitOdd(head1);
    evenlist=splitEven(head1);
    printf("\nodd list ");
    displayList(oddlist);
    printf("\neven list ");
    displayList(evenlist);
}

NODE* splitOdd(NODE *st)
{
    NODE *first=NULL, *last, *temp;
    while(st!=NULL)
    {
        if(st->data%2!=0)       // if data is odd, create separate LL
        {
            temp=(NODE*)malloc(sizeof(NODE));
            temp->data=st->data;
            temp->next=NULL;
            if(first==NULL)
                first=temp;
            else
                last->next=temp;
            last=temp;
        }
        st=st->next;
    }return first;
}

NODE* splitEven(NODE *st)
{
    NODE *first=NULL, *last, *temp;
    while(st!=NULL)
    {
        if(st->data%2!=0);
        else
        {
            temp=(NODE*)malloc(sizeof(NODE));
            temp->data=st->data;
            temp->next=NULL;
            if(first==NULL)
                first=temp;
            else
                last->next=temp;
            last=temp;
        }
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