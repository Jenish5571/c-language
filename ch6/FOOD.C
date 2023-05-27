#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,bill = 0,qty;
	tmp:
	clrscr();

	printf("enter....\n");
	printf("1) pizza\n");
	printf("2) barger\n");
	printf("3)sandwich\n");
	printf("enter your choice : ");
	scanf("%d",&choice);

	clrscr();

	switch(choice)
	{
		case 1:
			printf("\n you have selected pizza !!\n\n");

			printf("enter...\n");
			printf("1) margerita\t\t150\n");
			printf("2) veg cheese\t\t200\n");
			printf("3) sevan cheesy\t\t450\n");
			printf("enter you choice :");
			scanf("%d",&choice);
			printf("enter quantity");
			scanf("%d",qty);

			switch(choice)
			{
				case 1:
					printf("you have ordered marderita\n");
					bill += 150 * qty;

					printf("\n\nenter...\n");
					printf("1) order more\n");
					printf("2) bill\n");
					printf("enter your choice.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						goto tmp;
					}
					break;
				case 2:
					printf("you have ordered veg chesse\n");
					bill += 200 * qty;

					printf("\n\nenter...\n");
					printf("1) order more\n");
					printf("2) bill\n");
					printf("enter your choice.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						goto tmp;
					}
					break;
				case 3:
					printf("you have ordered sevan cheesy\n");
					bill += 450 * qty;

					printf("\n\nenter...\n");
					printf("1) order more\n");
					printf("2) bill\n");
					printf("enter your choice.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						goto tmp;
					}
					break;
				default:
					printf("invlid input !!");

			}
			break;
		case 2:
			printf("you have selected barger !!\n");
			printf("enter...\n");
			printf("1) enter...\n");
			printf("1) sliced onion\t\t150\n");
			printf("2) sliced tamato\t\t200\n");
			printf("3) sliced cheese\t\t450\n");
			printf("enter you choice :");
			scanf("%d",&choice);
			printf("enter quantity");
			scanf("%d",qty);

			switch(choice)
			{
				case 1:
					printf("you have ordered sliced onion\n");
					bill += 150 * qty;

					printf("\n\nenter...\n");
					printf("1) order more\n");
					printf("2) bill\n");
					printf("enter your choice.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						goto tmp;
					}
					break;
				case 2:
					printf("you have ordered sliced tamato\n");
					bill += 200 * qty;

					printf("\n\nenter...\n");
					printf("1) order more\n");
					printf("2) bill\n");
					printf("enter your choice.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						goto tmp;
					}
					break;
				case 3:
					printf("you have ordered sliced cheese\n");
					bill += 450 * qty;

					printf("\n\nenter...\n");
					printf("1) order more\n");
					printf("2) bill\n");
					printf("enter your choice.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						goto tmp;
					}
					break;
				default:
					printf("invlid input !!");

			}
			break;

		case 3:
			printf("you have selected sandwich!!\n");
			printf("enter...\n");
			printf("1) pesto focaccia \t\t150\n");
			printf("2) paneer & cheddar\t\t200\n");
			printf("3) ultimate chorizo\t\t450\n");
			printf("enter you choice :");
			scanf("%d",&choice);
			printf("enter quantity");
			scanf("%d",qty);

			switch(choice)
			{
				case 1:
					printf("you have ordered pesto focaccia\n");
					bill += 150 * qty;

					printf("\n\nenter...\n");
					printf("1) order more\n");
					printf("2) bill\n");
					printf("enter your choice.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						goto tmp;
					}
					break;
				case 2:
					printf("you have ordered paneer & cheddar\n");
					bill += 200 * qty;

					printf("\n\nenter...\n");
					printf("1) order more\n");
					printf("2) bill\n");
					printf("enter your choice.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						goto tmp;
					}
					break;
				case 3:
					printf("you have ordered ultimate chorizo\n");
					bill += 450 * qty;

					printf("\n\nenter...\n");
					printf("1) order more\n");
					printf("2) bill\n");
					printf("enter your choice.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						goto tmp;
					}
					break;
				default:
					printf("invlid input !!");

			}
			break;
		default:
			printf("invild input !!\n");

	}
	clrscr();
	printf("**********************\n");
	printf("enter amount : %d\n",bill);
	printf("**********************\n");

	printf("thnkuuu for using our system !!");

	getch();
}







