#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;

	tmp:
	clrscr();
	printf("Enter...\n");
	printf("1)english\n");
	printf("2)hindi\n");
	printf("3)gujarati\n");
	printf("enter your choice\n");
	scanf("%d",&choice);

	clrscr();
	switch(choice)
	{
		case 1:
			printf("\nyou have selected english !!");

			printf("Enter...\n");
			printf("1: internet recharge\n");
			printf("2: top up recharge\n");
			printf("3: special recharge\n");
			printf("Enter your choice\n");
			scanf("%d",&choice);

			if(choice == 1)
			{
			     goto tmp;

			}
			break;
		case 2:
			printf("\nyou have selected hindi !!");

			printf("Enter...\n");
			printf("1: internet recharge ke liye 1 dabaye\n");
			printf("2: top up recharge ke liye 2 dabaye\n");
			printf("3: special recharge ke liye 3 dabaye\n");
			printf("Enter your choice\n");
			scanf("%d",&choice);

			if(choice == 1)
			{
			     goto tmp;

			}
			break;
		case 3:
			printf("\nyou have selected gujarati !!");

			printf("Enter...\n");
			printf("1: internet recharge mate 1 dabavo\n");
			printf("2: top up recharge mate  2 dabavo\n");
			printf("3: special recharge mate 3 dabavo\n");
			printf("Enter your choice\n");
			scanf("%d",&choice);

			if(choice == 1)
			{
				goto tmp;
				break;
			}
	       }

	       clrscr();
	       printf("================================\n");
	       printf("you have successfully recharge\n");
	       printf("================================\n");
	getch();
}