/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 7 August, 2017, 11:05 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node     // declaring structure node [data|next]
    {
        int data;
        struct node *next;
    }NODE;             // name of structure is NODE
    
 NODE* createList();
 void displayList(NODE *);
 
int main()
{
    int sum;
    NODE *head1;    //head is a starting address of LL
    head1=createList();
    displayList(head1);
}

NODE* createList()
{
    int n,i;
    NODE *first, *last, *temp;
    printf("enter no. of nodes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=(NODE*)malloc(sizeof(NODE));   // calculate size of NODE and dynamically allocate req. bytes
        printf("enter element %d\n",i);     // (NODE*) converts pointer into NODE* type, explicitly
        scanf("%d",&temp->data);        // store element in temp
        temp->next=NULL;        // make next part of temp = NULL
        if(i==0)
            first=temp;     // copy temp into first to retain it throughout exe
        else
            last->next=temp;
        last=temp;        // copy temp to last
    }return first;
}
void displayList(NODE *st)
{
    for(;st!=NULL;st=st->next)
    {
        printf("%d ",st->data);
    }
}
