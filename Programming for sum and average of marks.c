#include<stdio.h> 
 int main()
{
	int i;
	float mark,sum,avg;
	printf("Enter the marks obtained by 5 students:\n");
	for(i=0;i<5;i++)
	{
	scanf("%f",&mark);
	sum=sum+mark;
		
	printf("sum of the marks:");
	scanf("%f", &sum);
	}
	avg=sum/5;
	printf("\nAverage Mark =%0.2f",avg);
	getch();
	
}


