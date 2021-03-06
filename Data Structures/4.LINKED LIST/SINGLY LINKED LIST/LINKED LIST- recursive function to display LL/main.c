/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 7 August, 2017, 11:57 PM
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
 void displayList(NODE *);
 
int main()
{
    NODE *head1;    //head is a starting address of LL
    head1=createList();
    displayList(head1);
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
void displayList(NODE *st)
{
     if(st!=NULL)
     {
         printf("%d ",st->data);
         displayList(st->next);
     }
}



