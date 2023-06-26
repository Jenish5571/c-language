#include<stdio.h>
main()
{
	int n;
	printf("enter row and column: ");
	scanf("%d",&n);
	int a[n][n],i,j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
		}	
	}
	printf("Transpose of given matrix: \n");  
    for(i=0; i<n; i++)
	{  
        for(j=0; j<n; j++)
		{  
           printf("%d ",a[i][j]);  
        }  
        printf("\n");  
    }  
}

