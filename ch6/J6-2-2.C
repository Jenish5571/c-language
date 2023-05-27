#include<stdio.h>
#include<conio.h>
main()
{
	int n,i=1;
	clrscr();
	printf("enter a number :");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%11==0)
		{
			printf("palindrom number");
			break;
		}
		i++;
	}
	getch();
}