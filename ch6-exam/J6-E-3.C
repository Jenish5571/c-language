#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,firstdigit,lastdigit;
	clrscr();
	printf("enter a number =");
	scanf("%d",&n);
	lastdigit = n%10;
	while(n>=10)
	{
		n=n/10;

	}
	firstdigit = n;
	sum = firstdigit + lastdigit;
	printf("sum of first and last digit : %d",sum);

	getch();

}