#include<stdio.h>
int main()
{
	int n,i;
	float avg,sum=0.0,num[100];
	printf("Enter number of elements :");
	scanf("%d",&n);
	while(n>100||n<1)
	{
		printf("Error!number should be in the range(1 to 100).\n");
		primtf("Enter the number again");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
		printf("%d.Enter number:",i+1);
		scanf("%f",&num[i]);
		sum+=num[i];
	}
	avg=sum/n;
	printf("average =%.2f",avg);
	return 0;
}