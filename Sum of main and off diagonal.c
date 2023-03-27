#include<stdio.h>
void main()
{
	int a[10][10],sum,so,r,i,j,k;
	printf("Enter the number of rows of the square matrix:");
	scanf("%d",&r);
	printf("Enter the elements of matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("Enter the element a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Elements of matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Elements of main diagonal are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			{
				printf("%d\n",a[i][j]);
			}
		}
	}
	printf("Elements of off diagonal are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			{
				printf("%d\n",a[i][r-j-1]);
			}
		}
	}
	for(i=0;i<r;i++)
	{
		sum+=a[i][i];
		so+=a[i][r-i-1];
	}
	printf("\nThe sum of the main diagonal elements is=%d\n",sum);
	printf("The sum of the off diagonal elements is =%d\n",so);
}
