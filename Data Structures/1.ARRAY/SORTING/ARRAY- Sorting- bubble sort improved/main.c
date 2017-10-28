/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 17 July, 2017, 5:47 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
void printAr();
int scanAr();
void BubbleSort();

int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    BubbleSort(ar,n);
    printAr(ar,n);      // print array (must get array size 'n' first)
}

void BubbleSort(int ar[], int n)
{
    int i,j,temp,flag;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            flag=0;
            if(ar[j]>ar[j+1])
            {
            temp=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=temp;
            flag=1;
            }
        } if(flag==0) break;
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