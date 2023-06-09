#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of columns:");
	scanf("%d",&c);
	printf("Enter the 1st and 2nd Matrix elements=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d%d",&a[i][j],&b[i][j]);
			printf("Multiply of the matrix=\n");
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]+=a[i][j]*b[i][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}