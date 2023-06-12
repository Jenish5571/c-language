#include<stdio.h>

main()
{
	int r,c;
	printf("Enter the array row size :");
	scanf("%d",&r);
	printf("Enter the array column size :");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	float d,sum=0,b;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			sum += a[i][j];
		}
	}
	
	printf("\n");
	b=i*j;
	d=sum/b;	
	
	printf("Average of 2D Array : %f",d);
}