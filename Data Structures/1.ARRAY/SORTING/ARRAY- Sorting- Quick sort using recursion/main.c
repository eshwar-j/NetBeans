/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 17 July, 2017, 10:44 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
void printAr();
int scanAr();
void QuickSort();

int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    QuickSort(ar,0,n-1);
    printAr(ar,n);      // print array (must get array size 'n' first)
}

void QuickSort(int ar[], int low, int high)
{
    int p=low,d=low+1,u=high,temp;
    while(d<=u)
    {
        if(ar[u]>=ar[p])
            u--;
        else
        {
            temp=ar[d];
            ar[d]=ar[u];
            ar[u]=temp;
            d++;
        }
    }
    temp=ar[p];
    ar[p]=ar[u];
    ar[u]=temp;
    if(u-low>1)
        QuickSort(ar,low,u);
    if(high-d>1)
        QuickSort(ar,d,high);
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