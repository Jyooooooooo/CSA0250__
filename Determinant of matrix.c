#include<stdio.h>
int main()
{
	int rows,columns,Deter=0,a[2][2];
	printf("\nEnter the 2*2 matrix elements\n");
	for(rows=0;rows<2;rows++)
	{
		for(columns=0;columns<2;columns++)
		{
			 scanf("%d",&a[rows][columns]);
		}
	}
	Deter=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	printf("\nDeterminant of 2*2 matrix=%d",Deter);
	return 0;
}