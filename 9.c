#include<stdio.h>
int main()
{
   int i, j, k, rows;
   printf("Enter the no.of rows: ");
   scanf("%d", &rows);
   for(i=1; i <= rows; i++)
   {
    for(j=i; j < rows; j++)
    
	    printf(" ");

    for(k=1; k <= i; k++)
        
		printf("*");

    printf("\n");
   }
   	
	   for(i=rows; i >= 1; i--)
   	{
   		for(j=i; j <= rows; j++)
   		
		   printf(" ");
   		
		for(k = 1; k < i; k++)
   	    
		   printf("*");
   	    
   	printf("\n");
	}
	return 0;
}
