#include<stdio.h>
int main()
{
   int a[3][3],b[3][3],mul[3][3],r,c,i,j,k;
   printf("Enter the number of rows:");
   scanf("%d", &r);
   printf("Enter the columns:");
   scanf("%d", &c);
   printf("Enter the first and second matrix elements:\n");
   for (i=0; i<r; i++)
   {
   	for (j=0; j<c; j++)
   	{
   		scanf 
		   ("%d%d",&a[i][j],&b[i][j]);
   		printf("Multiply of the matrix:\n");
	   }
	  } 
	  for(i=0;i<r;i++)
	  {
	  	for(j=0; j<c; j++)
	  	{
	  		mul[i][j]=0;
	  	for(k=0; k<c; k++)
	  		{
	  			mul[i][j]+=a[i][j]*b[i][j];
			  }
		  }
		} 
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
			printf("%d\t",mul[i][j]);
			}
			printf("\n");
		 }
		 return 0; 
	}

