#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();

	printf("enter a=");
	scanf("%d",a);

	printf("enter b=");
	scanf("%d",b);

	printf("enter c=");
	scanf("%d",c);

	printf("enter d=");
	scanf("%d",d);

	if(a==b && b==c && c==d && d==a)
	{
		printf("all are same");
	}
	else if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is big %d",a);
			}
			else
			{
				printf("d is big %d",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is big %c",c);
			}
			else
			{
				printf("d is big %d",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is big %d",b);
			}
			else
			{
				printf("d is big %d",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is big %d",c);
			}
			else
			{
				printf("d is big %d",d);
			}
		}
	}

	getch();
}