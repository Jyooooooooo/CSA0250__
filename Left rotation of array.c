#include<stdio.h>
int main()
{
	int a[1000],i,n,j,k,temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements in array:");
	for(i=00;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("How many times left rotate:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		temp=a[0];
		for(j=0;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		a[n-1]=temp;
	}
	printf("\nArray elements after left rotate:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}