#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();

	for(i=1; i<=5 ; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(k=1 ;k<=5-i; k++)
		{
			printf("  ");
		}
		for(k=1; k<=5-i; k++)
		{
			printf("  ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	getch();
}