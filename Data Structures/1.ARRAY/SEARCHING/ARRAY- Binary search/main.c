/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 13 July, 2017, 11:07 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
void BinSearch();
int scanAr();
void printAr();

int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    printAr(ar,n);
    BinSearch(ar,n);
}

void BinSearch(int ar[], int n)
{
    int mid,low=0,high=n,ele;
    printf("\nEnter search element\n");
    scanf("%d",&ele);
    while(high-low>=1)
    {
        mid=(low+high)/2;
        if(ar[mid]==ele)
        {
            printf("Element found at a[%d]",mid);
            return;
        }
        if(ar[mid]>ele)
            high=mid;
        if(ar[mid]<ele)
            low=mid;
    }
    printf("Element not found");
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

void printAr(int ar[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}