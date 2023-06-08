#include<stdio.h>
int main()
{
	int M,N,i;
	int count =0;
	printf("Enter the value of M:");
	scanf("%d",&M);
	printf("Enter the value of N:");
	scanf("%d",&N);
	printf("All Odd Numbers:");
	for(i=M;i<=N;i++)
	{
		if(i % 2!=0)
		{
			printf("%d",i);
		}
		else
		{
			count++;
		}
	}
	printf("\nAll Even numbers:");
	for(i=M;i<=N;i++)
	{
		if(i % 2==0)
		{
			printf("%d ",i);
		}
	}
	printf("\nCount of Even Numbers:%d\n",count);
	return 0;
	}

