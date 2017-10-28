/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 21 July, 2017, 3:39 AM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void scanMatrix();
void printMatrix();
void addMatrix();

int i,j;

void main()
{
    int mat1[10][10],mat2[10][10],r1,c1,r2,c2;
    printf("Enter matrix dimension of MATRIX 1\n");
    scanf("%d %d",&r1,&c1);
    scanMatrix(mat1,r1,c1);
    printMatrix(mat1,r1,c1); 
    
    printf("Enter matrix dimension of MATRIX 2\n");
    scanf("%d %d",&r2,&c2);
    scanMatrix(mat2,r2,c2);
    printMatrix(mat2,r2,c2); 
    
    addMatrix(mat1,mat2,r1,c1,r2,c2);
    printMatrix(mat2,r2,c2);
}

void addMatrix(int mat1[10][10], int mat2[10][10], int r, int c)
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            mat2[i][j]=mat1[i][j]+mat2[i][j];
    }
    printf("Matrix addition\n");
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
