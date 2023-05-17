#include<stdio.h>
int main()
{
	float a,b,c,s,area;
	printf("\nEnter the three sides of triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=(s*(s-a)*(s-b)*(s-c));
	printf("\nArea of triangle=%.2f\n",area);
	return 0;
}