#include<stdio.h>
#include<stdlib.h>
struct course
{
	int marks;
	char sub[50];
};
int main()
{
	struct course*ptr;
	int i,noofRecords;
	printf("Enter the number of records:");
	scanf("%d",&noofRecords);
	ptr = (struct course *)malloc(noofRecords * sizeof(struct course));
	for(i=0;i<noofRecords;++i)
	{
		printf("Enter subject and marks:\n");
		scanf("%s %d",(ptr+i)->sub,&(ptr + i)->marks);
	}
	printf("Displaying Information:\n");
	for(i=0;i<noofRecords;++i)
	{
		printf("%s\t%d\n",(ptr + i)->sub,(ptr + i)->marks);
	}
	free(ptr);
	return 0;
}
