#include<stdio.h>

main()
{
	int n;
	
	printf("enter a number = ");
	scanf("%d",&n);
	
	int a[n],i;
	float sum=0;
	
		for(i=0; i<n; i++)
		{
			printf("enter a[%d]:",i);
			scanf("%d",&a[i]);
			sum += a[i];
		}
		printf("sum : %d\n",sum);
		printf("average : %f\n",sum/n);
}