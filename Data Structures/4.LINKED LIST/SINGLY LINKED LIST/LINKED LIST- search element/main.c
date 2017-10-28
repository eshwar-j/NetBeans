/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 7 August, 2017, 10:46 AM
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
 int SearchEle(NODE *);
 
int main()
{
    int ele;
    NODE *head1;    //head is a starting address of LL
    head1=createList();
    displayList(head1);
    ele=SearchEle(head1);
    if(ele)
        printf("Element found\n");
    else
        printf("Element not found");
}

 int SearchEle(NODE *st)
 {
     int ele;
     printf("\nEnter search element\n");
     scanf("%d",&ele);
     while(st!=NULL)
     {
         if(st->data==ele)
             return 1;
         st=st->next;
     }return 0;
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
