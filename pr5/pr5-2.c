#include<stdio.h>
main()
{

	int r,c;
	printf("enter row size: ");
	scanf("%d",&r);
	printf("enter column size: ");
	scanf("%d",&c);

	int a[r][c],i,j;

	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}	
	}

	int	largest=a[i][j];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>largest)
			{
				largest=a[i][j];
			}
		}         
	}
	printf("largest number: %d",largest);
}
