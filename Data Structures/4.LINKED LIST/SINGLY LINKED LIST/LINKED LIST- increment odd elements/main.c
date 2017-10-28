/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 9 August, 2017, 8:11 PM
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
 void incrOdd(NODE *);
 
int main()
{
    NODE *head1;    //head is a starting address of LL
    head1=createList();
    incrOdd(head1);
}

 void incrOdd(NODE *st)
 {
     for(;st!=NULL;st=st->next)
     {
         if(st->data%2!=0)
         {
             st->data++;
             printf("%d ",st->data);
         }
     }
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

