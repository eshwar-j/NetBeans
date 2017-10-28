/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 16 August, 2017, 9:04 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct node
    {
        int coeff, exp;
        struct node *next;
    }PNODE;
    
 PNODE* readPoly();
 int evalPoly(PNODE *, int x);
 void displayPoly(PNODE *);
 
int main()
{
    int sum,evalfor=2;
    PNODE *head1;    //head is a starting address of LL
    head1=readPoly();
    sum=evalPoly(head1,evalfor);
    displayPoly(head1);
    printf("\nevaluation result for value %d = %d",evalfor,sum);
}

int evalPoly(PNODE *st, int x)
{
    int sum=0;
    while(st!=NULL)
    {
        sum=sum+st->coeff*pow(x,st->exp);
        st=st->next;
    }
    return sum;
}

PNODE* readPoly()
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
