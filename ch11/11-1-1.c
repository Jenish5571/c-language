#include<stdio.h>

void main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int a[n],*p,i;
	*p=a;
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&n);
	}
	
	for(i=0; i<n; i++)
	{
		printf("square of rach : %d ",a[i]*a[i],i);
	}

}
