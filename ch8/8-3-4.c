#include<stdio.h>

main()
{
	int r=5,c=5;
	int i,j,a[r][c],e[i][j],b[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n\n");
	printf("******************\n");
	for(i=0; i<5; j++)
	{
		for(j=0; j<5; j++)
		{
			if(i==0||j==0||i==4||j==4)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}