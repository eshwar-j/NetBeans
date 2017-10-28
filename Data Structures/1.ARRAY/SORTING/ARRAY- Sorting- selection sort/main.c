/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 17 July, 2017, 1:31 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void printAr();
int scanAr();
void SelectionSort();

int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    SelectionSort(ar,n);
}

void SelectionSort(int ar[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }printf("\n");printAr(ar,n);
        }
    }
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