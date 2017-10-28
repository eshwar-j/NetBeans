/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 20 August, 2017, 5:39 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int data;
        struct node *next;
    }SCNODE;
    
 SCNODE *createList();
 SCNODE *insertNode(SCNODE *);
 SCNODE *deleteNode(SCNODE *);
 void displayList(SCNODE *);
 void displayRev(SCNODE *);
 
int main()
{
    int ch;
    SCNODE *head1;    //head is a starting address of LL
    
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
            printf("Exiting");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
   }while(ch!=6);
}

SCNODE* createList()
{
    int n,i;
    SCNODE *first=NULL, *last, *temp;
    printf("Enter no. of nodes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=(SCNODE*)malloc(sizeof(SCNODE));
        printf("Enter element %d : ",i+1);
        scanf("%d",&temp->data);
        if(first==NULL)
            first=temp;
        else
            last->next=temp;    
        last=temp;
    }
    last->next=first;
    return first;
}
void displayList(SCNODE *st)
{
    SCNODE *st1=st;
    do{
        printf("%d ",st->data);
        st=st->next;
    }while(st!=st1);
}

void displayRev(SCNODE *st)
{
    SCNODE *st1=st,*t;
    while(st1->next!=st)
        st1=st1->next;
    printf("%d ",st1->data);
    while(t!=st)
    {
        t=st;
        while(t->next!=st1)
            t=t->next;
        printf("%d ",t->data);
        st1=t;
    }
}

SCNODE *insertNode(SCNODE *st)
{
    int i,ele,pos;
    SCNODE *first=st,*temp,*t;
    temp=(SCNODE*)malloc(sizeof(SCNODE));
    printf("Enter Element to be inserted and position\n");
    scanf("%d %d",&ele,&pos);
    temp->data=ele;
    if(pos==1)
    {
        for(t=st;t->next!=st;t=t->next);    //reach last node
        temp->next=first;       // and make it point to first (first handle empty part of new node i.e "->next" of new node)
        t->next=temp;       //later over write old node by new node
        return temp;
    }
    else
    {
        t=st;
        for(i=0;i<pos-2;i++)    // bring t till node after which the element is to be inserted
            t=t->next;
        temp->next=t->next;     // point its next where old node is pointing(first handle empty part i.e "->next" of new node)
        t->next=temp;       // point old node to new node
        return first;
    }
}

SCNODE *deleteNode(SCNODE *st)
{
    int pos,i;
    SCNODE *st1=st,*t=st->next;
    printf("Enter node position\n");
    scanf("%d",&pos);
    if(pos==1)      // if pos is 1
    {
        for(st1=st;st1->next!=st;st1=st1->next);    // bring st1 to last node
        st1->next=t;        // make st1 next to point to t
        free(st);
        return t;
    }
    for(i=0;i<pos-2;i++)
    {
        t=t->next;  // bring t to the node to be deleted
        st1=st1->next; //keep st1 behind t
    }
    st1->next=t->next;  // point st1 to t's next, skipping t
    free(t);
    return st;
}