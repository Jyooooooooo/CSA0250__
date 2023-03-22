#include<stdio.h>
int main()
{
	int a[5], i;
	printf("Enter Array Elements:\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Array Elements are:\n");
	for (i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}
