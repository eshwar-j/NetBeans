/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 11 July, 2017, 9:17 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
void printAr();
int scanAr();
void SumAr();

int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    printAr(ar,n);      // print array (must get array size 'n' first)
    SumAr(ar,n);
}

void SumAr(int ar[], int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];      // calculate sum but don't print it yet
    }
        printf("\nsum=%d ",sum);
}

void printAr(int ar[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
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