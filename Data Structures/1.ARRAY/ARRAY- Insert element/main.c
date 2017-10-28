/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 20 July, 2017, 12:04 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
void printAr();
int scanAr();
int insertElement();

int main()
{
    int ar[10],n;       // declare array with max size 10 and no. of elements variable n
    n=scanAr(ar);       // 'n' get no of elements in scanned array
    printAr(ar,n);      // print array (must get array size 'n' first)
    n=insertElement(12,1,ar,n);         //element, position, array, no. of elements
    printf("\n");
    printAr(ar,n);
}

int insertElement(int element, int position, int ar[], int n)
{
    int i;
    for(i=n-1;i>=position-1;i--)
        ar[i+1]=ar[i];
    ar[position]=element;
    return n+1;
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