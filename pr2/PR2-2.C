#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	float x,a,b,c;

	clrscr();
	printf("Enter units : ");
	scanf("%d",&n);

	if(n>=1 && n<=50)
	{
		a=n*0.5;
		printf("Electrictiy Bill : %f",(a*0.2)+a);
	}
	else if(n>=51 && n<=150)
	{
		b=((n-50)*0.75)+25;
		printf("Electrictiy Bill : %f",(b*0.2)+b);
	}
	else if(n>=151 && n<=250)
	{
		b=((n-150)*1.2)+100;
		printf("Electrictiy Bill : %f",(c*0.2)+c);
	}
	else if(n>250)
	{
		x=((n-250)*1.5)+220;
		printf("Electrictiy Bill : %f",(x*0.2)+x);
	}
	else
	{
		printf("Invalid input");
	}
	getch();
}