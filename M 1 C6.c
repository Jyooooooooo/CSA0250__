#include<stdio.h>
int main()
{
	int n,num,digit,sum=0;
	printf("Enter N value:");
	scanf("%d",&n);
	printf("Enter %d digit number",n);
	scanf("%d",&num);
	while(num>0)
	{
		digit = num % 10;
		sum +=digit;
		num /=10;
	}
	printf("Sum of %d digit number:%d\n",n,sum);
	return 0;
}
