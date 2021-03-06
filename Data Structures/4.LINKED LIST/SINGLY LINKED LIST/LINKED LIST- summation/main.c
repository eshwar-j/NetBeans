/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 4 August, 2017, 3:14 PM
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
 int sumList(NODE *);
 
int main()
{
     int sum;
    NODE *head1, *head2;    //head is a starting address of LL
    head1=createList();
    displayList(head1);
    sum=sumList(head1);
    printf("\nsum = %d",sum);
}

 int sumList(NODE *st)
 {
     int s=0;
     while(st!=NULL)
     {
         s=s+st->data;
         st=st->next;
     }return s;
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