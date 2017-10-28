/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 14 July, 2017, 12:41 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void printAr();
int scanAr();
void BinSearch();


int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    printAr(ar,0,n);      // print array (must get array size 'n' first)
    BinSearch(ar,0,n,6);
}

void BinSearch(int ar[],int low, int high, int ele)
{
    int mid=(high+low)/2;
    if(ar[mid]==ele)
    {
        printf("\nElement found");
        return;
    }
    if(ar[mid]<ele)
    {
        if(high-low>=1)
            BinSearch(ar,low,mid,ele);
        else
        {
            printf("\nElement not found");
            return;
        }
    }
        if(ar[mid]>ele)
    {
        if(high-low>=1)
            BinSearch(ar,mid,high,ele);
        else
        {
            printf("\nElement not found");
            return;
        }
    }
}

void printAr(int ar[], int index, int n)
{
    if(index<n)
    {
        printf("%d ",ar[index]);
        printAr(ar,index+1,n);
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