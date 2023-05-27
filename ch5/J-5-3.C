#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("enter marks=");
	scanf("%d",&n);
	if(n>90 && n<100)
	{
		printf("A1");
	}
	else if (n>80 && n<89)
	{
		printf("A2");
	}

	else if (n>70 && n<79)
	{
		printf("B1");
	}

	else if (n>60 && n<69)
	{
		printf("B2");
	}

	else if (n>50 && n<59)
	{
		printf("C1");
	}

	else if (n>40 && n<49)
	{
		printf("C2");
	}

	else if (n>33 && n<39)
	{
		printf("D1");
	}

	else
	{
		printf("fail");
	}

	getch();

}