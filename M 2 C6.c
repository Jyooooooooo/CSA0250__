#include<stdio.h>
#define ROW1 2
#define COL1 2
#define ROW2 2
#define COL2 2
void matrixMultiplication(int mat1[][COL1],int mat2[][COL2],int res[][COL2])
{
	int i,j,k;
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL2;j++)
		{
			res[i][j]=0;
			for(k=0;k<COL1;k++)
			{
				res[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
}
void displayMatrix(int mat[][COL2])
{
	int i,j;
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL2;j++)
		{
			printf("%.4d ",mat[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int mat1[ROW1][COL1]={{1,2},{5,3}};
	int mat2[ROW2][COL2]={{2,3},{4,11}};
	int res[ROW1][COL2];
	matrixMultiplication(mat1,mat2,res);
	printf("Mat Mul =\n");
	displayMatrix(res);
	return 0;
}
