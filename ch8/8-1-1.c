#include<stdio.h>

main()
{
	int n;
	
	printf("enter a number = ");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("a[%d]:%d\n",i,a[i]); 
	}
}