/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 9 August, 2017, 8:21 PM
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
 NODE* copyOdd(NODE *);
 void displayList(NODE *);
 
int main()
{
    NODE *head1, *oddhead;    //head is a starting address of LL
    head1=createList();
    oddhead=copyOdd(head1);
    displayList(oddhead);
}

 NODE* copyOdd(NODE *st)
 {
     NODE *first=NULL, *last, *temp;
     for(;st!=NULL;st=st->next)
     {
         if(st->data%2!=0)
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

