#include<stdio.h>
#include<conio.h>
void main()
{
	int first,second;

	clrscr();
	printf("enter first number=");
	scanf("%d",&first);
	printf("enter second number=");
	scanf("%d",&second);

	while(first<=second)
	{       if(first%4==0)
		{
			printf("%d \n",first);
		}
		first++;
	}
	getch();
}