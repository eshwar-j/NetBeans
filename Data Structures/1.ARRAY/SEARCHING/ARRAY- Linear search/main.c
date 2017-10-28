/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 11 July, 2017, 10:25 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
void printAr();
int scanAr();
void LinSearch();

int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    printAr(ar,n);
    LinSearch(ar,n);
}

void printAr(int ar[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}

void LinSearch(int ar[], int n)
{
    int i, ele;
    printf("\nEnter search element\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ar[i]==ele)
        {
            printf("\n%d found at a[%d] ",ele,i);
            break;
        }
    }  
}

int scanAr(int ar[10])
{
    int i,n;
    printf("Enter array size and elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Array stored\n");
    return n;   //return no. of elements
}