/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 16 August, 2017, 11:17 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int coeff, exp;
        struct node *next;
    }PNODE;
    
 PNODE *readPoly();
 PNODE *addPoly(PNODE *, PNODE *);
 void displayPoly(PNODE *);
 
int main()
{
    PNODE *P1,*P2,*P3;
    P1=readPoly();
    
    P2=readPoly();
    
    P3=addPoly(P1,P2);
    displayPoly(P1);
    printf("\n");
    displayPoly(P2);
    printf("\n");
    displayPoly(P3);
}

PNODE *addPoly(PNODE *P1, PNODE *P2)
{
    PNODE *first=NULL, *last, *temp;
    while(P1!=NULL&&P2!=NULL)
    {
        temp=(PNODE*)malloc(sizeof(PNODE));
        if(P1->exp>P2->exp)
        {
            temp->coeff=P1->coeff;
            temp->exp=P1->exp;
            P1=P1->next;
        }
        else
        {
            if(P2->exp>P1->exp)
            {
               temp->coeff=P2->coeff;
               temp->exp=P2->exp;
               P2=P2->next; 
            }
            else
            {
                temp->coeff=P1->coeff+P2->coeff;
                temp->exp=P1->exp;
                P1=P1->next;
                P2=P2->next;
            }
        }
        if(first==NULL)
            first=temp;
        else
            last->next=temp;
        last=temp;
    }
    while(P1!=NULL)
    {
        temp=(PNODE*)malloc(sizeof(PNODE));
        temp->coeff=P1->coeff;
        temp->exp=P1->exp;
        P1=P1->next;
        last->next=temp;
        last=temp;
    }
    while(P2!=NULL)
    {
        temp=(PNODE*)malloc(sizeof(PNODE));
        temp->coeff=P2->coeff;
        temp->exp=P2->exp;
        P2=P2->next;
        last->next=temp;
        last=temp;
    }
    last->next=NULL;
    return first;
}

PNODE *readPoly()
{
    int n,i;
    PNODE *first=NULL, *last, *temp;
    printf("enter no. of polynomials\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=(PNODE*)malloc(sizeof(PNODE));
        printf("enter polynomial %d : ",i);
        scanf("%d",&temp->coeff);
        printf("^");
        scanf("%d",&temp->exp);
        if(first==NULL)
            first=temp;
        else
            last->next=temp;
        last=temp;
    }
    last->next=NULL;
    return first;
}

void displayPoly(PNODE *st)
{
    while(st!=NULL)
    {
        printf("%dx^%d + ",st->coeff,st->exp);
        st=st->next;
    }
    printf("\b\b");
}
