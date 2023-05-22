#include<stdio.h>
#include<string.h>
int Sum_of_digits(int digit)
{
	int sum=0;
	while(digit>0)
	{
		sum+=(digit%10);
		digit/=10;
	}
	return sum;
}
void main()
{
	char name[100],partner[100];
	int p,ns=0,ps=0,love=54,i,j,love_percentage,opt;
	do
	{
		printf("Enter your name:");
		gets(name);
		printf("Enter your partner name:");
		gets(partner);
		for(i=0;i,strlen(name);i++)
		{
			ns+= (tolower(name[i])-96);
		}
		p=Sum_of_digits(ns);
		love_percentage=(Sum_of_digits(ns)+Sum_of_digits(ps)+love);
		printf("The love percentage is %d",love_percentage);
		printf("\nPress 1 to continue or 0 to exit:");
		scanf("%d",&opt);
	}
	while(opt!=0);
	return 0;
}