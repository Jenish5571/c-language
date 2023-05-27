#include<stdio.h>
#include<conio.h>
void main()
{
	int no,rev=0;
	clrscr();
	printf("Enter no = ");
	scanf("%d",&no);

	while(no>0)
	{
		rev=rev*10;
		rev=rev+no%10;
		no=no/10;

		printf("rev=%d\n\n",rev);
		printf("no=%d\n\n",no);

	}
	printf("reverse digit =%d\n\n",rev);

	getch();

}