#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;

	clrscr();
	printf("enter x :");
	scanf("%d" ,&x);
	printf("enter y :");
	scanf("%d" ,&y);
	printf("(x-y)^3 :%d",x*y-y*y-2*x*y);
	getch();
}