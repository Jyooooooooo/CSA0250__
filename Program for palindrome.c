#include<stdio.h>
int main()
{
	int n,remainder,reversed=0,original;
	printf("Enter an integer:");
	scanf("%d",&n);
	original=n;
	while(n!=0)
{
	remainder = n % 10;
	reversed = reversed *10 +remainder;
	n /= 10;
}
    if(original == reversed)
    {
	printf("%d is palindrome.",original);
    }
    else
    {
    	printf("%d is not palindrome.",original);
	}
	return 0;
}
