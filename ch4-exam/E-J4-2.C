#include<stdio.h>
#include<conio.h>

main()
{
	int hra,da,ta;
	int p;
	clrscr();

	printf("base salary :");
	scanf("%d",&p);
	hra=(.1)*p;
	da=(.05)*p;
	ta=(.08)*p;
	printf("total : %d ",p+hra+da+ta);
	getch();
}