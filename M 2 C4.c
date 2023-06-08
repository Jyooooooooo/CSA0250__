#include<stdio.h>
int main()
{
	int P=60;
	int Q=70;
	int R=3,i;
	printf("Numbers are:");
	for(i=P;i<=Q;i++)
	{
		int temp =i;
		int containsR=0;
		while(temp!=0)
		{
			int digit = temp % 10;
			if(digit==R)
			{
				containsR = 1;
				break;
			}
			temp/=10;
		}
		if(containsR)
		{
			continue;
		}
		printf("%d, ",i);
	}
	printf("\n");
	return 0;
}
