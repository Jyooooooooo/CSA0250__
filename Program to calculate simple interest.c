#include<stdio.h>
#include<stdlib.h>
int main()
{
	int principal,rate,time,interest;
	printf("Enter the principal:");
	scanf("%d",&principal);
	printf("Enter the rate:");
	scanf("%d",&rate);
	printf("Enter the time:");
	scanf("%d",&time);
	interest = principal*rate*time/1000;
	printf("The simple interest is %d",interest);
	return 0;
}
