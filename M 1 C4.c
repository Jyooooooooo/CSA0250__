#include<stdio.h>
int main()
{
	int i,number,sum=0;
	printf("Enter a number:");
	scanf("%d",&number);
	for(i=1;i<number;i++)
	{
		if(number % i ==0)
		{
			sum +=i;
		}
	}
	if(sum == number)
	{
		printf("It's a perfect number");
	}
	else
	{
		printf("It's not a perfect number");
	}
	return 0;
}
