/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 16 August, 2017, 11:51 AM
 * Description: result incorrect
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int coeff, exp;
        struct node *next;
    }PNODE;
    
 PNODE *readPoly();
 PNODE *multPoly(PNODE *, PNODE *);
 void displayPoly(PNODE *);
 
int main()
{
    PNODE *P1,*P2,*P3;
    P1=readPoly();
    P2=readPoly();
    P3=multPoly(P1,P2);
    displayPoly(P1);
    printf("\n");
    displayPoly(P2);
    printf("\n");
    displayPoly(P3);
}

PNODE *multPoly(PNODE *P1, PNODE *P2)
{
    int C,E;
    PNODE *first=NULL, *last, *temp ,*t1,*t2,*t3;
    for(t1=P1;t1!=NULL;t1=t1->next)
    {
        for(t2=P2;t2!=NULL;t2=t2->next)
        {
            C=t1->coeff*t2->coeff;
            E=t1->exp+t2->exp;
            for(t3=first;t3!=NULL;t3->next)
            {
                if(t3->exp==E)
                {
                    t3->coeff=t3->coeff+C;
                    break;
                }
            }
            if(t3==NULL)
            {
                temp=(PNODE*)malloc(sizeof(PNODE));
                temp->coeff=C;
                temp->exp=E;
                if(first==NULL)
                    first=temp;
                else
                    last->next=temp;
                last=temp;
            }
        }
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
