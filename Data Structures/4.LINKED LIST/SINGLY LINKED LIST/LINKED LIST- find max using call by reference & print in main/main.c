/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 5 August, 2017, 9:22 AM
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
 void getMax(NODE *, int *, int *);
 
int main()
{
    int max,pos;
    NODE *head1;    //head is a starting address of LL
    head1=createList();
    displayList(head1);
    getMax(head1, &max, &pos);
    printf("\nMax = %d at Pos %d",max,pos);
}

 void getMax(NODE *st, int *max, int *pos)
 {
     int cnt=0;
     *max=st->data;
     *pos=1;
     st=st->next;
     while(st!=NULL)
     {
         cnt++;
         if(*max<st->data)
         {
             *max=st->data;
             *pos=cnt;
         }
         st=st->next;
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
void displayList(NODE *st)
{
    while(st!=NULL)
    {
        printf("%d ",st->data);
        st=st->next;
    }
}
