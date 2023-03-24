#include<stdio.h>
int tmp=20;
main()
{
	printf("%d ",tmp);
	fun();
	printf("%d ",tmp);
}
fun()
{
	static int tmp=10;
	printf("%d ",tmp);
}
