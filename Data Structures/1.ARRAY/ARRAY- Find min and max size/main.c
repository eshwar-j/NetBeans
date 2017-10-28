/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 11 July, 2017, 10:06 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
void printAr();
int scanAr();
void findMinMax();

int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    printAr(ar,n);      // print array (must get array size 'n' first)
    findMinMax(ar,n);
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
    printf("Array stored!\n");
    return n;   //return no. of elements
}

void findMinMax(int ar[], int n)
{
    int i,min,max,temp;
    temp=ar[0];
    for(i=0;i<n;i++)
    {
        if(temp<=ar[i])
            min=temp;
        if(ar[i]>=max)
            max=ar[i];
    }
    printf("\nMin=%d\nMax=%d",min,max);
}