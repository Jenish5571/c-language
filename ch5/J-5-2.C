#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("enter number =");
	scanf("%d",&n);
	if(n<0)
	{
		printf("negative number");
	}
	else if (n==0)
	{
		printf("nuteral number");
	}
	else
	{
		printf("positive number");
	}

	getch();

}