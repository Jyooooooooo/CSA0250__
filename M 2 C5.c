#include<stdio.h>
float calculateInterest(float principal,int years,char isSeniorCitizen)
{
	float rateOfInterest = (isSeniorCitizen =='y')?12.0:10.0;
	float interest = (principal * rateOfInterest * years)/100.0;
	return interest;
}
int main()
{
	float principal,interest;
	int years;
	char isSeniorCitizen;
	printf("Enter the principal aamount:");
	scanf("%f",&principal);
	printf("Enter the number of years:");
	scanf("%d",&years);
	printf("Is the customer a senior citizen(y/n):");
	scanf("%c",&isSeniorCitizen);
	interest = calculateInterest(principal,years, isSeniorCitizen);
	printf("Interest:%.2f\n",interest);
	return 0;
}
