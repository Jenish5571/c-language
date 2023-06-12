#include<stdio.h>

main()
{
	int n;
	
	printf("enter a number = ");
	scanf("%d",&n);
	
	int a[n],i,b[n],sum=0;
	printf("\n\n");
		printf("enter array a's elements\n");
	
		for(i=0; i<n; i++)
		{
			printf("enter a[%d]:",i);
			scanf("%d",&a[i]);
		}
			printf("\n\n");
			printf("enter array b's elements\n");
	
			for(i=0; i<n; i++)
			{
				printf("enter b[%d]:",i);
				scanf("%d",&b[i]);
			}	
				printf("\n\n");
				printf("array c is : \n");
	
				for(i=0; i<n; i++)
				{
					sum=a[i]+b[i];
					printf("%d\n",sum);
				}
		
}