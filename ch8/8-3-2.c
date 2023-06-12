#include <stdio.h>
 
main() 
{
 	int r, c;
	printf("Enter the number of row : ");
	scanf("%d", &r);
 	printf("Enter the number of column : ");
 	scanf("%d", &c);

 	int a[r][c],b[r][c],sum=0,i,j;
  	printf("Enter array A's elements :\n");
  	
  	for (i=0; i<r; i++)
  	{
   		 for (j=0; j<c; j++)
		{
     		 printf("a [%d] [%d] : ",i+1,j+1);
     		 scanf("%d",&a[r][c]);
   		}
    }

  	printf("Enter array B's elements:\n");
 	for (i=0;i<r;i++)
	{
    	for (j=0; j<c;j++)
		{
     	 	printf("b[%d][%d] : ",i+1,j+1);
     	 	scanf("%d",&b[r][c]);
    	}
	}
  for (i=0; i<r; i++)
  	{
    	for (j=0; j<c; j++) 
		{
     		sum[r][c] = a[r][c] + b[r][c];
   	 	}
   	}

  printf("\n array c is : \n");
  for (i=0; i<r; i++)
	{
   		for (j=0; j<c; j++) 
			if (j==c-1)
			{
				printf("%d  ", sum[r][c]);
			}
	    	else
			{
        		printf("\n\n");
   			}
    }
}

