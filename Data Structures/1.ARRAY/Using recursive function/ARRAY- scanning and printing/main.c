/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 12 July, 2017, 5:41 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void printAr();
int scanAr();

int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    printAr(ar,0,n);      // print array (must get array size 'n' first)
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