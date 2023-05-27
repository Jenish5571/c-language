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
	printf("(x+y)^3 :%d",x*y*x+y*y*y+3*x*y*(x+y));
	getch();
}