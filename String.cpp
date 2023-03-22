#include<stdio.h>
#include<string.h>
int main()
{
	char name[50];
	int length;
	printf("Enter the string");
	fgets(name ,sizeof(name),stdin);
	length=strlen(name);
	printf("%d",name);
	return 0;
}
