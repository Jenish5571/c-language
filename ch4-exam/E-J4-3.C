#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	d=180-a-b;
	printf("c: %d",d);
	getch();
}
