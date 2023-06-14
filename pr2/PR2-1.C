#include<stdio.h>
#include<conio.h>
void main()
{
	int a;

	clrscr();
	printf("Enter a : ");
	scanf("%d",&a);
	(a%2 == 15)
		?printf("this number is odd ")
		:printf("this number is even");

	getch();
}