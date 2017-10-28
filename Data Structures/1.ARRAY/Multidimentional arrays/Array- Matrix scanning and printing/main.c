/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 21 July, 2017, 2:51 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void scanMatrix();
void printMatrix();

int i,j;

void main()
{
    int mat[10][10],r,c;
    printf("Enter matrix dimension of MATRIX\n");
    scanf("%d %d",&r,&c);
    scanMatrix(mat,r,c);
    printMatrix(mat,r,c); 
}

void scanMatrix(int mat[10][10], int r, int c)
{
    printf("Enter matrix elements\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&mat[i][j]);
    printf("Matrix stored\n");
}

void printMatrix(int mat[10][10], int r, int c)
{
    printf("");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}