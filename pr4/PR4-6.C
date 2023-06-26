#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();

	for(i=5; i>=1 ; i--)
	{
		for(j=1; j<=i-1; j++)
		{
			printf("  ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		for(j=4; j>=i; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	getch();
}