/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 20 August, 2017, 6:23 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev,*next;
}DNODE;

DNODE *createList();
void displayList(DNODE *);
void displayRev(DNODE *);
DNODE *insertNode(DNODE *);
DNODE *deleteNode(DNODE *) ;

int main()
{
    int ch;
    DNODE *head1;    //head is a starting address of LL
    
    do
    {
        printf("\n\n1. Create List");
        printf("\n2. Display List");
        printf("\n3. Display Reverse");
        printf("\n4. Insert Node");
        printf("\n5. Delete Node");
        printf("\n6. Exit\n");
        scanf("%d",&ch);
        printf("\n");
    switch(ch)
    {
        case 1:
            head1=createList();
            break;
        case 2:
            displayList(head1);
            break;
        case 3:
            displayRev(head1);
            break;
        case 4:
            head1=insertNode(head1);
            break;
        case 5:
            head1=deleteNode(head1);
            break;
        case 6:
            printf("Exiting");;
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
   }while(ch<6);
}

DNODE *createList()
{
    int i,n,ele;
    DNODE *first=NULL,*temp,*last;
    printf("\nEnter no of nodes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element : ");
        temp=(DNODE*)malloc(sizeof(DNODE));
        scanf("%d",&ele);
        temp->data=ele;
        if(first==NULL)
            first=temp;
        else
        {
            last->next=temp;
            temp->prev=last;
        }
        last=temp;
    }
    last->next=NULL;
    first->prev=NULL;
    return first;
}

void displayList(DNODE *st)
{
    for(;st!=NULL;st=st->next)
        printf("%d ",st->data);            
}
void displayRev(DNODE *st)
{
    for(;st->next!=NULL;st=st->next);// reach last node
    for(;st->prev!=NULL;st=st->prev)
        printf("%d ",st->data);
    printf("%d ",st->data);
}

DNODE *insertNode(DNODE *st)
{
    DNODE *temp,*t;
    int ele, pos,i;
    printf("Enter the element and position\n");
    scanf("%d%d",&ele,&pos);
    temp=(DNODE*)malloc(sizeof(DNODE));
    temp->data=ele;
    if(pos==1)
    {
        temp->prev=NULL;
        temp->next=st;
        st->prev=temp;
        return temp;
    }
    else
    {
        t=st;
        for(i=0;i<pos-2;i++)
            t=t->next;// reach the node after which node is to be inserted
        temp->next=t->next;
        t->next->prev=temp;
        t->next=temp;
        temp->prev=t;
        
        return st;
    }
}
DNODE *deleteNode(DNODE *st)
{
    DNODE *st1=st->next,*t=st;
    int pos,i;
    printf("Enter element position\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        st1->prev=NULL;
        free(st);
        return st1;
    }
    else
    {							// keep t behind st1
        for(i=0;i<pos-2;i++)
        {
            t=t->next;
            st1=st1->next;
        }
        t->next=st1->next;
        st1->next->prev=t;
        free(st1);
        return st;
    }
}