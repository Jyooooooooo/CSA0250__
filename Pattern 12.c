#include<stdio.h>
void main()
{
	char s[]="INDIA";
	int i,j;
	for(i=0;s[i];i++)
	{
		for(j=0;j<=i;j++)
		printf("%c",s[j]);
		printf("\n");
	}
	return 0;
}
