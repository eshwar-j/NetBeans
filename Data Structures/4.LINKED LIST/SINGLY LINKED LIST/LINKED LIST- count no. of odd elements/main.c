/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 5 August, 2017, 11:01 AM
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
 int getOddCount(NODE *);
 
int main()
{
    int odd;
    NODE *head1;    //head is a starting address of LL
    head1=createList();
    displayList(head1);
    odd=getOddCount(head1);
    printf("\n%d Odd elements",odd);
}

 int getOddCount(NODE *st)
 {
     int cnt=0;
     while(st!=NULL)
     {
         if(st->data%2!=0)
         {
             cnt++;
         }
         st=st->next;
     }return cnt;
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

