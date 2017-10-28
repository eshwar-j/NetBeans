/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 22 August, 2017, 9:51 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int data;
        struct node *prev,*next;
    }DCNODE;
    
 DCNODE *createList();
 DCNODE *insertNode(DCNODE *);
 DCNODE *deleteNode(DCNODE *);
 void displayList(DCNODE *);
 void displayRev(DCNODE *);
 
int main()
{
    int ch;
    DCNODE *head1;    //head is a starting address of LL
    
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
        default:
            printf("Invalid choice\n");
            break;
    }
    }while(ch<6);
}

DCNODE* createList()
{
    int n,i;
    DCNODE *first=NULL, *last, *temp;
    printf("Enter no. of nodes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=(DCNODE*)malloc(sizeof(DCNODE));
        printf("Enter element %d : ",i+1);
        scanf("%d",&temp->data);
        if(first==NULL)
            first=temp;
        else
        {
            last->next=temp;
            temp->prev=last;
        }
        last=temp;
    }
    last->next=first;
    first->prev=last;
    return first;
}
void displayList(DCNODE *st)
{
    DCNODE *st1=st;
    do{
        printf("%d ",st->data);
        st=st->next;
    }while(st!=st1);
}

void displayRev(DCNODE *st)
{
    DCNODE *st1=st->prev;
    while(st1!=st)
    {
        printf("%d ",st1->data);
        st1=st1->prev;
    }
    printf("%d ",st1->data);
}

DCNODE *insertNode(DCNODE *st)
{
    int i,ele,pos;
    DCNODE *temp,*t=st;
    temp=(DCNODE*)malloc(sizeof(DCNODE));
    printf("Enter Element to be inserted and position\n");
    scanf("%d%d",&ele,&pos);
    temp->data=ele;
    if(pos==1)
    {
        temp->next=st;
        temp->prev=st->prev;
        st->prev->next = temp;
        st->prev=temp;
        return temp;
    }
    else
    {
        for(i=0;i<pos-2;i++)    //bring t to 1 pos before where the node is to be inserted
            t=t->next;
        temp->next=t->next;
        temp->prev=t;
        t->next->prev=temp;
        t->next=temp;
        return st;
    }
}

DCNODE *deleteNode(DCNODE *st)
{
    int pos,i;
    DCNODE *st1=st,*t=st->next;
    printf("Enter node position\n");
    scanf("%d",&pos);
    if(pos==1)      // if pos is 1
    {
        st1=st->next;
        st1->prev=st->prev;
        st->prev->next = st1;
        free(st);
        return st1;
    }
    for(i=0;i<pos-2;i++)
    {
        t=t->next;  // bring t to the node to be deleted
        st1=t->prev; //keep st1 behind t
    }
    st1->next=t->next;  // point st1 to t's next, skipping t
    st1->prev=t->prev;
    free(t);
    return st;
}
