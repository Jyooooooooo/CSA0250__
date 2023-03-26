#include<stdio.h>
void dh(int*abc)
{
	*abc= *abc+2;
}
int main()
{
	int i=101;
	dh(&i);
	printf("Value of the variable i is:%d",i);
	
	return 0;
}
