#include<stdio.h>
int main()
{
	int a[10][10],transpose[10][10],r,c,i,j;
	printf("Enterthe rows and columns:");
	scanf("%d %d", &r, &c);
	
	printf("\nEnter matrix values:\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
	printf("Enter the element a%d%d:" ,i+1,j+1);
	scanf("%d", &a[i][j]);
    }
	printf("\nEntered matrix:\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
    printf("%d",a[i][j]);
    if (j==c -1)
    printf("\n");
	}
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		transpose[j][i]=a[i][j];
		
	}
	printf("\nTranspose of the matrix:\n");
	for(i=0;i<c;i++)
	for(j=0;j<r;j++)
	{
		printf("%d ",transpose[i][j]);
	if(j==r -1)
	printf("\n"); 
    }
return 0;
}
