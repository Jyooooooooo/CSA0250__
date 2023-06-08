#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,choice;
	int result;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the valiue of n:");
	scanf("%d",&n);
	printf("Enter your choice:\n");
	printf("1.Pow(x,n)\n");
	printf("2.Add(x,n)\n");
	printf("3.Sub(x,n)\n");
	printf("4.Mul(x,n)\n");
	printf("5.Div(x,n)\n");
	printf("Choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			result =pow(x,n);
			printf("Pow(x,n) = %d\n",result);
			break;
		case 2:
			result = x+n;
			printf("Add(x,n) = %d\n",result);
			break;
		case 3:
			result=x-n;
			printf("Sub(x,n) = %d\n",result);
			break;
		case 4:
			result=x*n;
			printf("Mul(x,n) = %d/n",result);
			break;
		case 5:
			if(n != 0)
			{
				result=x/n;
				printf("Div(x,n) = %d\n",result);
			}
			else
			{
				printf("Error:Cannot divided by zero.\n");
			}
			break;
			default:
				printf("Invalid choice.\n");
				break;
	}
	return 0;
}
