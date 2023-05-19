#include<stdio.h>
int prod_arr(int arr[],int n)
{
	int i,n,result=1;
	for(i=0;i<n;i++)
	result=result*arr[i];
	return result;
}
int main()
{
	int arr[]={10,20,6,4,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("%d",prod_arr(arr,n));
	return 0;
}