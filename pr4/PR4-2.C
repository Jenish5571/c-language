#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a,b=11;
	clrscr();

	for(i=11; i<=15; i++)
	{
		for(j=11; j<=i; j++)
		{
			printf("%d ",b);
			b++;
		}
		printf("\n");
	}
	getch();
}