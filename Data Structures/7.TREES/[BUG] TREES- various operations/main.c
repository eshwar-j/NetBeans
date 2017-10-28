/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 6 September, 2017, 9:12 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

typedef struct node
{
    int data;
    struct node *left,*right;
}TNODE;

TNODE *createTree();
void inOrder(TNODE *);
void preOrder(TNODE *);
void postOrder(TNODE *);
void joinNode(TNODE *, TNODE *);
void printLeaf(TNODE *);
void countLeaf(TNODE *);
void countNonLeaf(TNODE *);
void printMinMax(TNODE *);
void searchEle(TNODE *,int ele);
void printTree(TNODE *);

int count=0,ele;
    
 int main()
{
    int choice;
    TNODE *root;
    do
    {
        //system("clear"); similar to clrscr
        printf("\n----------------------------------------------------------------");
	printf("\n1. Create Tree");
	printf("\n2. Display In order");
	printf("\n3. Display Pre order");
	printf("\n4. Display Post order");
	printf("\n5. Print leaf nodes");
        printf("\n6. Count leaf nodes");
        printf("\n7. Count non leaf nodes");
        printf("\n8. Print Min and Max");
        printf("\n9. Search element");
	printf("\n10. Print Tree level-wise");
	printf("\n11. Exit\n");
        printf("----------------------------------------------------------------");
        printf("\nChoice : ");
	scanf("%d",&choice);
    switch(choice)
    {
	case 1:
	    root=createTree();
	    break;
	case 2:
            printf("\nInorder : ");
	    inOrder(root);
	    break;
	case 3:
            printf("\nPreorder : ");
	    preOrder(root);
	    break;
	case 4:
            printf("\nPostorder : ");
            postOrder(root);
	    break;
	case 5:
            printLeaf(root);
	    break;
        case 6:
            countLeaf(root);
            printf("\nLeaf node count :  %d",count);
            count=0;
	    break;
        case 7:
            countNonLeaf(root);
            printf("\nNon Leaf node count :  %d",count);
            count=0;
	    break;
        case 8:
            printMinMax(root);
	    break;
        case 9:
            printf("Search element : ");
            scanf("%d",&ele);
            searchEle(root,ele);
	    break;
	case 10:
            printf("TREE\n");
            printTree(root);
            break;
	case 11:
	    printf("\nExiting...");
	    return 0;
        break;
	default:
	    printf("\nInvalid choice");
	    break;
    }
   }while(choice!=7);
}

TNODE *createTree()
{
    char ch;
    TNODE *rt,*t;
    rt=(TNODE*)malloc(sizeof(TNODE));
    printf("Enter root node : ");
    scanf("%d",&rt->data);
    rt->left=NULL;
    rt->right=NULL;
    printf("Add more nodes? Y/N? : ");
    scanf(" %c",&ch);
    while(ch=='y')
    {
    t=(TNODE*)malloc(sizeof(TNODE));
    printf("Enter node : ");
    scanf("%d",&t->data);
    t->left=NULL;
    t->right=NULL;
    joinNode(rt,t);
    printf("Add more nodes? Y/N? : ");
    scanf(" %c",&ch);
    }
    return rt;
}
void joinNode(TNODE *rt, TNODE *t)
{
	char LR;
	printf("Enter L/R to join to LEFT/RIGHT of %d : ",rt->data);
	scanf(" %c",&LR);
	if(LR=='l')
	{
		if(rt->left==NULL)
		{
			rt->left=t;
			return;
		}
		else
			joinNode(rt->left,t);
	}
	if(LR=='r')
	{
		if(rt->right==NULL)
		{
			rt->right=t;
			return;
		}
		else
			joinNode(rt->right,t);
	}
}
void inOrder(TNODE *t)
{
    if(t!=NULL)
    {
	inOrder(t->left);
	printf("%d ",t->data);
        count++;
	inOrder(t->right);
    }
}
void preOrder(TNODE *t)
{
    if(t!=NULL)
    {
	printf("%d ",t->data);
	preOrder(t->left);
	preOrder(t->right);
    }
}
void postOrder(TNODE *t)
{
    if(t!=NULL)
    {
	postOrder(t->left);
	postOrder(t->right);
	printf("%d ",t->data);
    }
}
void printLeaf(TNODE *t)
{
    printf("\nLeaf nodes :  ");
    if(t!=NULL)
    {
        inOrder(t->left);
        if(t->left==NULL&&t->right==NULL)
            printf("%d ",t->data);
        inOrder(t->right);
    }
}
void countLeaf(TNODE *t)
{
    if(t!=NULL)
    {
        inOrder(t->left);
        if(t->left==NULL&&t->right==NULL)
        inOrder(t->right);
    }
}
void countNonLeaf(TNODE *t)
{
    if(t!=NULL)
    {
        inOrder(t->left);
        if(t->left==NULL||t->right==NULL)
            count++;
        inOrder(t->right);
    }
}
void printMinMax(TNODE *t)      // left most node will be min, right most node will be max for a BST
{
    TNODE *rt=t;
    while(t->left!=NULL)
        t=t->left;
    printf("Min element : %d",t->data);
    t=rt;
    while(t->right!=NULL)
        t=t->right;
    printf("\nMax element : %d",t->data);  
}
void searchEle(TNODE *t, int ele)
{
    if(t->data==ele)
    {
        printf("Element found");
        return;
    }
    if(t->data>ele)
    {
        if(t->left!=NULL)
            searchEle(t->left,ele);
        else
        {
            printf("Element not found");
            return;
        }
    }
    else
    {
        if(t->right!=NULL)
            searchEle(t->right,ele);
        else
        {
            printf("Element not found");
            return;
        }
    }
}
void printTree(TNODE *rt)
{
    TNODE *queue[10],*t,*dummy;
    dummy->data=-1;
    dummy->left=NULL;
    dummy->right=NULL;
    queue[rear]=rt;
    rear++;
    queue[rear]=dummy;
    rear++;
    while(front!=rear-1) // -1 because we are inserting an extra dummy variable
    {
        t=queue[front];front++;
        if(t->data==-1)
        {
            printf("\n");
            queue[rear]=t;
            rear++;
        }
        else
            printf("%d ",t->data);
        if(t->left!=NULL)
        {
            queue[rear]=t->left;
            rear++;
        }
        if(t->right!=NULL)
        {
            queue[rear]=t->right;
            rear++;
        }
    }
}
