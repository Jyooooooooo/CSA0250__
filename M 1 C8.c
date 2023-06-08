#include<stdio.h>
int main()
{
	int totalUsers,staffUsers,studentUsers;
	printf("Enter the total number of users:");
	scanf("%d",&totalUsers);
	printf("Enter the number of staff users:");
	scanf("%d",&staffUsers);
	studentUsers = totalUsers-staffUsers-(staffUsers/3);
	printf("Student Users :%d\n",studentUsers);
	return 0;
}
