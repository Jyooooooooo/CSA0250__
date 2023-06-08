#include<stdio.h>
int factorial(int n)
{
	if(n==0||n==1)
	  return 1;
	else
	  return n*factorial(n-1);
}
int main()
{
	int N;
	printf("Enter a positive integer:");
	scanf("%d",&N);
	if(N<0)
	{
		printf("Error:Factorial is not defined for negative number.\n");
	}
	else
	{
		int result=factorial(N);
		printf("The factorial of %d is :%d\n",N,result);
	}
	return 0;
}
