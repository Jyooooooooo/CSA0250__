#include<stdio.h>
void printPattern(int n)
{
	int i,j;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		for(j=0;j<n-i+1;j++)
		{
			printf(" ");
		}
	}
}
int main()
{
	int lines;
	printf("Number of lines:");
	scanf("%d",&lines);
	printPattern(lines);
	return 0;
}
