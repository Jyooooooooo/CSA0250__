#include<stdio.h>
int add();
int main()
{
	int sum;
	sum=add();
	printf("%d",sum);
	return 0;	
}
int add()
{
	int a,b,c;
	scanf("%d%d", &a, &b);
	c=a+b;
	return c;
}

