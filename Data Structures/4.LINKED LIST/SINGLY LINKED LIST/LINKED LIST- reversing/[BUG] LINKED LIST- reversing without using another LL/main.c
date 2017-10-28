/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 9 August, 2017, 7:58 PM
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
    NODE *head1, *t1;    //head is a starting address of LL
    head1=createList();
    t1=reverseList(head1);
    displayList(t1);
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
    NODE *t1=st, *t2=t1->next, *t3=t2->next;
    while(t2!=NULL)
    {
        t2->next=t1;
        t1=t2;
        t2=t3;
        t3=t3->next;
    }
    st->next=NULL;
    return t1;
}

void displayList(NODE *st)
{
    while(st!=NULL)
    {
        printf("%d ",st->data);
        st=st->next;
    }
}