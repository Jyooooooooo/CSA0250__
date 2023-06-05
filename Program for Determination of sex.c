#include<stdio.h>
int main()
{
	char c;
	printf("Enter F for female,M for male and O for others:-->");
	scanf("%c",&c);
	if(c=='F'||c=='f')
	{
		printf("Your gender is Female");
	}
	else if(c=='M'||c=='m')
	{
		printf("Your gender is Male");
	}
	else
	{
		printf("Your gender is Others");
	}
	return 0;
}
