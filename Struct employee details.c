#include<stdio.h>
struct Employee
{
	int id,age,salary;
	char name[30],designation[30],department[30];
};
int main()
{
	struct Employee e;
	printf("Enter id of employee:");
	scanf("%d",&e.age);
	printf("Enter age of employee:");
	scanf("%d",&e.age);
	printf("Enter the name of the employee:");
	getchar();
	fgets(e.name,30,stdin);
	printf("Enter designation of employee:");
	fgets(e.designation,30,stdin);
	printf("Enter department of employee:");
	fgets(e.department,30,stdin);
	printf("Enter salary of employee:");
	fgets(e.salary,30,stdin);
	printf("\nEmployee details:\n");
	printf("Employee id:%d\n",e.id);
	printf("Employee name:%d\n",e.name);
	printf("Employee age:%d\n",e.age);
	printf("Employee designation:%d\n",e.designation);
	printf("Employee department:%d\n",e.department);
	printf("Employee salary:%d\n",e.salary);
	return 0;
}