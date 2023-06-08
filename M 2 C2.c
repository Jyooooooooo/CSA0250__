#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are eligible to vote.\n");
	}
	else
	{
		int years_left = 18-age;
		printf("You are not eligible to vote.You can vote after %d years.\n",years_left);
	}
	return 0;
}
