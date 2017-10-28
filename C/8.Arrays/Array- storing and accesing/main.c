/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 15 June, 2017
 * Description:
 *----------------------------------------------------------------------------*/
 
#include <stdio.h>

void main()
{ 
int avg,sum=0;
int i;
int marks[5]; // integer array declaration, un-initialized and max size 5
for(i=0;i<=4;i++)
	{
	printf("\nEnter marks");
	scanf("%d",&marks[i]); // store data in array 
	}
	printf("%d",marks[2]);
for(i=0;i<=4;i++)
sum = sum + marks[i] ; // read data from an array
avg = sum/5;
printf ( "\nAverage marks = %d", avg );
}