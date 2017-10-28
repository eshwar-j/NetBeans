/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 11 August, 2017, 10:03 AM
 * Description: code works with TC only
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

typedef struct node
    {
	int data;
	struct node *next;
    }NODE;

 NODE* createList();
 NODE* mergeList(NODE *, NODE *);
 void displayList(NODE *);

int main()
{
    NODE *head1, *head2, *newhead;    //head is a starting address of LL

    clrscr();
    head1=createList();
    displayList(head1);

    head2=createList();
    displayList(head2);

    newhead=mergeList(head1,head2);
    displayList(newhead);
    getch();
    return 0;
}

 NODE* mergeList(NODE *st1, NODE *st2)
 {
     NODE *t1=st1,*t2=st2,*t3=t1->next,*t4=t2->next;
     while(t1!=NULL&&t2!=NULL)
     {
	 t1->next=t2;
	 t2->next=t3;
	 t1=t3;
	 t2=t4;
	 t3=t3->next;
	 t4=t4->next;
     }
     if(t2!=NULL)
     {
	 t1=st1;
	 while(t1->next!=NULL)
	     t1=t1->next;
	 t1->next=t2;
     }
     return st1;
 }
NODE* createList()
{
    int n,i;
    NODE *first, *last, *temp;
    printf("enter no. of nodes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	temp=(NODE*)malloc(sizeof(NODE));
	printf("enter element %d : ",i);
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(i==0)
	    first=temp;
	else
	    last->next=temp;
	last=temp;
    }
    return first;
}

void displayList(NODE *st)
{
    printf("\n\tList is : ");
    while(st!=NULL)
    {
        printf("%d ",st->data);
        st=st->next;
    }
}
