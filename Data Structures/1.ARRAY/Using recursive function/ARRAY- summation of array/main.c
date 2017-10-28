/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 13 July, 2017, 12:47 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void printAr();
int scanAr();
int sumAr();


int main()
{
    int ar[10],n,res;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    printAr(ar,0,n);      // print array (must get array size 'n' first)
    res=sumAr(ar,0,n);
    printf("\nsum= %d ",res);
}

int sumAr(int ar[], int i , int n)
{
    if(i<n)
    {
    return ar[i]+sumAr(ar,i+1,n);
    } return 0;
}

void printAr(int ar[], int index, int n)
{
    {
    if(index<n)
    {
        printf("%d ",ar[index]);
        printAr(ar,index+1,n);
    }
    } return 0;
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

