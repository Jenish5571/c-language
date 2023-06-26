#include<stdio.h>

main()
{
	int com,i,len;
	char name[20],rev[20];
	
	printf("enter your name :");
	gets(name);
	
	strcpy(rev,name);
	
	len = strlen(name);
	
	strrev(name);
	com=strcmp(name,rev);
	
	if(com==0)
	{
		printf("palindrome...");
	}
	else
	{
		printf("not a palindeome...");
	}
}