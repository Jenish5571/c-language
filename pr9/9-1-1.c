#include<stdio.h>

void main()
{
	int n,i;
	printf("enter any string :");
	scanf("%d",&n);
	
	int a[n];
	int *p[n];
	
	
	for(i=0; i<n; i++)
	{
		p[i] = &a[n];
	}
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]:%d\t p[%d]:%d\n",i,a[i],*p[i]);
	}

}