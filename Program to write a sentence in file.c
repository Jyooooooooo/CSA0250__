#include<stdio.h>
#include<stdlib.h>
int main()
{
	char sen[1000];
	FILE *fptr;
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("Enter a sentence:\n");
	fgets(sen,sizeof(sen),stdin);
	fprintf(fptr,"%s",sen);
	fclose(fptr);
	return 0;
}
