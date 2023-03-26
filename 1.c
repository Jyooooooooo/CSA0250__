#include<stdio.h>
#include<conio.h>
void main()
{
	float celsius,fahrenhit;

	
	printf("\nEnter the celsius temperature:");
	scanf("%f",&celsius);
	
	fahrenhit=(1.8*celsius)+32;
	printf("\nTemperarture in fahrnhitis %f:",fahrenhit);
	getch();
	
}
