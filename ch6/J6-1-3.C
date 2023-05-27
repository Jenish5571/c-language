#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;

	clrscr();
	printf("enter any number\t=");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d \t",i);
		i++;
	}
	getch();
}