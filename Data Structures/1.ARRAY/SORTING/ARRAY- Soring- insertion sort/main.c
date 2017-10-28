/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 17 July, 2017, 6:13 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void printAr();
int InsertionSort();

int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=InsertionSort(ar);
    printAr(ar,n);      // print array (must get array size 'n' first)
}

int InsertionSort(int ar[])
{
    int i,n,top=0,temp;
    printf("Enter no. of elements and array\n");
    scanf("%d %d",&n,&ar[0]);
    for(i=1;i<n;i++)
    {
        scanf("%d",&temp); // scan next element for comparison with ar[0]
        top=i-1;        // make top=0
        while(ar[top]>temp)     // if scanned element is less than top element
        {
            ar[top+1]=ar[top]; //shift top element up by 1
            top--;
            if(top==-1)
                break;
        } ar[top+1]=temp;   // if scanned element is greater than top element, put that element on top
    }return n;      // return array size for printing
}

void printAr(int ar[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}
