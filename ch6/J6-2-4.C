#include<stdio.h>
#include<conio.h>
main()
{
	int first=0,second=1,next;
	int i=1,n;
	clrscr();
	printf("enter a number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d ",first);
		next=first+second;
		first=second;
		second=next;
		i++;
	}
	getch();
}