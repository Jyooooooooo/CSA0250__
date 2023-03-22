#include<stdio.h>
#include<string.h>
int main()
{
	char name1[50]="apple",name2[50]="apple";
	int Result;
	Result=strcmp(name1, name2);
	printf("%d",Result);
	return 0;
}
