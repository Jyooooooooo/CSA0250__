#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
     {
     	scanf("%d",&arr[i]);
	 }
	 int count_odd=0,count_even=0;
	 for(i=0;i<n;i++)
	 {
	 	if(arr[i]%2==1)
	 	count_odd++;
	 	else
	 	count_even++;
	 }
	 printf("Odd:%d",count_odd);
	 printf("Even:%d",count_even);
	 return 0;                                                                                                                                                
}