#include<stdio.h>
#include<conio.h>
main()
{
	int x=0,y=1,z;
	int i,n;
	clrscr();

	printf("enter a number=");
	scanf("%d",&n);
	clrscr();
	for(i=1; i<=n; i++)
	{
		printf("%d \n",x);
		z=x+y;
		x=y;
		y=z;
	}

	getch();

}