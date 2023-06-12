#include<stdio.h>

main()
{
	int n1,n2,i,a,b,c;
	
	printf("Enter array a : ");
	scanf("%d",&n1);
	
	printf("Enter array b : ");
	scanf("%d",&n2);
	
	for(i=0; i<n1; i++)
	{
		printf("enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n2; i++)
	{
		printf("enter b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	printf("**********************\n");
	
	for(i=0; i<n1; i++)
	{
		c[i] = a[i];
	}
	for(i=0; i<n2; i++)
	{
		c[i + n1] = b[i];
	}
	
	printf("array a : \n");
	
	for(i=0; i<n1; i++);
	{
		printf("%d",a[i]);
	}
	
	printf("array b : \n");
	
	for(i=0; i<n2; i++);
	{
		printf("%d",b[i]);
	}	
	
	printf("array c : \n");
	
	for(i=0; i<(n1+n2); i++);
	{
		printf("%d",c[i]);
	}
}