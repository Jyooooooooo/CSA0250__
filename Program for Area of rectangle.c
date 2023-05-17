#include<stdio.h>
int main()
{
	float length,breadth,area;
	printf("Enter length of rectangle");
	scanf("%f",&length);
	printf("ENter the breadth of rectangle");
	scanf("%f",&breadth);
	area=(length*breadth);
	printf("Area of rectangle:%f\n",area);
	return 0;
}