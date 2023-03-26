#include<stdio.h>
int rec(int);
int main()
{
	int a;
	scanf("%d",&a);
	printf("The factorial of %d=%d",a,rec(a));
}
int rec(int x)
{
	int f;
	if(x==1)
	return 1;
	else
	f=x*rec(x-1);
	return f;
}

