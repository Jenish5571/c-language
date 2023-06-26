#include<stdio.h>

struct student
{
	int id;
	char name[20];
	float pr;
};

void main()
{
	FILE *ptr;
	ptr = fopen("C:\\Users\\R34\\Desktop\\JenishHirapara.xls","w");
	int n;

	printf("enter student :");
	scanf("%d",&n);
	struct student s[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nstudent %d%d\n",i+1,n);
		printf("enter id :");
		scanf("%d",&s[i].id);
		printf("enter name:");
		scanf("%s",&s[i].name);
		printf("enter pr:");
		scanf("%f",&s[i].pr);
	}
	for(i=0;i<n;i++)
	{
	
		fprintf(ptr,"%d\t%s%\tf\n",&s[i].id,&s[i].name,&s[i].pr);
	}
	
	fclose(ptr);
}