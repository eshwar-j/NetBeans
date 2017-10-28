/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 19 July, 2017, 9:14 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void printAr1();
void printAr2();
int scanAr1();
int scanAr2();

int main()
{
    int ar1[10],ar2[10],n1,n2;       // declare array with max size 10 and no. of elements variable n
    n1=scanAr1(ar1);       // 'n' get no of elements in scanned array
    n2=scanAr2(ar2);
    printAr1(ar1,n1);      // print array (must get array size 'n' first)
    printf("\n");
    printAr2(ar2,n2);
}

void printAr1(int ar1[], int n1)
{
    int i;
    for(i=0;i<n1;i++)
    {
        printf("%d ",ar1[i]);
    }
}

void printAr2(int ar2[], int n2)
{
    int i;
    for(i=0;i<n2;i++)
    {
        printf("%d ",ar2[i]);
    }
}

int scanAr1(int ar1[10])
{
    int i,n1;
    printf("Enter array 1 size and elements\n");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&ar1[i]);
    }
    printf("Array 1 stored\n");
    return n1;   //return no. of elements
}

int scanAr2(int ar2[10])
{
    int i,n2;
    printf("Enter array 2 size and elements\n");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&ar2[i]);
    }
    printf("Array 2 stored\n");
    return n2;   //return no. of elements
}
