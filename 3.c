#include<stdio.h>
void main()
{
	int num,sum=0,r,tem;
	printf(" Input the number:");
	scanf("%d",&num);
	
	for(tem=num;num!=0;num=num/10)
	{
		r=num%10;
		sum=sum+(r*r*r);
    }
    
    if(sum==tem)
    
    	printf("%d is a armstrong number.\n",tem);
    else
        printf("%d is not a armstrong number.\n",tem);
        return 0;
}
