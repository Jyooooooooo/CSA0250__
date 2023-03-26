#include<stdio.h>
int checkPrimenumber(int number)
{
	int i, f=1;
	for(i=2;i<=number/2;i++)
	{
		if (number %i==0)
		{
			f=0;
			break;
		}
	}
	return f;
}
int main()
{
	int num1=2,num2=20,j,f;
	printf("Prime numbers between %d and %d are:",num1,num2);
	for(j=2;j<num2;j++)
	{
		f=checkPrimenumber(j);
		if(f==1)
		{
			printf("%d ",j);
		}
	}
	return 0;
}
