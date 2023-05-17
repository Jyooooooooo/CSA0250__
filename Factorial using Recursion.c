#include<stdio.h>
long int multiplyNumbers(int n);
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	printf("Factorial of %d=%1d",n,multiplyNumbers(n));
	return 0;
}
long int multiplyNumbers(int n)
{
	if(n>=1)
	return n*multiplyNumbers(n-1);
	else
	return 1;
}