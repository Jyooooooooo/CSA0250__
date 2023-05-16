#include<stdio.h>
#define SIZE 3
int main()
{
	int A[SIZE][SIZE];
	int num,row,col;
	printf("Enter elements in the matrix of size %dx%d:\n",SIZE<SIZE);
	for(row==0;row<SIZE;row++)
	{
		for(col=0;col<SIZE;col++)
		{
			scanf("%d",&A[row][col]);
		}
	}
	printf("Enter a number to multiply the matrix withA:");
	scanf("%d",&num);
	for(row=0;row<SIZE;row++)
	{
		for(col=0;col<SIZE;col++)
		{
			A[row][col]=num*A[row][col];
	}
	}
	printf("\nResultant matrix .A=\n");
	for(row=0;row<SIZE;row++)
	{
		for(col=0;col<SIZE;col++)
		{
			printf("%d",A[row][col]);
		}
		printf("\n");
	}
	return 0;
}