#include<stdio.h>
int main()
{
	int size,i,a[10];
	int Even_sum=0,Odd_sum=0;
	printf("\nEnter size of array:");
	scanf("%d",&size);
	printf("\nEnter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			Even_sum=Even_sum+a[i];
		}
		else
		{
			Odd_sum=Odd_sum+a[i];
		}
	}
	printf("\nSum of even numbers in array=%d",Even_sum);
	printf("\nSum of odd numbers in array=%d",Odd_sum);
	return 0;
}