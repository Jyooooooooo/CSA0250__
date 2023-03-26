#include<stdio.h>
#include<conio.h>
int main()
{
	char *s,str[100];
	int len,i;
	printf("Enter the string:");
	gets(str);
	s=str;
	len=strlen(str);
	printf("The reverse of the string is:");
	for(i=len;i>=0;i--)
	{
		printf("%c",*(s+i));
	}
	return 0;
}
