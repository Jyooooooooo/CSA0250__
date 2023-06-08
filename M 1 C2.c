#include<stdio.h>
int main()
{
	int number,reverseNumber = 0;
	printf("Enter a number:");
	scanf("%d",&number);
	int temp=number;
	int digitCount = 0;
	while(temp !=0)
	{
		temp/=10;
		digitCount++;
	}
	temp=number;
	while(temp!=0)
	{
		int digit=temp % 10;
		reverseNumber = reverseNumber * 10 + digit;
		temp /= 10;
	}
	int lastDigit = reverseNumber % 10;
	reverseNumber /=10;
	reverseNumber = reverseNumber* 10 +lastDigit;
	printf("Reverse Number:%d\n",reverseNumber);
	return 0;
	
}
