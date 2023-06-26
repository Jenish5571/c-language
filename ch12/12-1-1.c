#include<stdio.h>

struct student
{
	int id;
	char name[10];
	int age;
	char course[10];
	char city[10];
	int standard;
	char scl[20];	
};
int main()
{
	int n,i;
	
	printf("enter number of student :");
	scanf("%d",&n);
	
	struct student s;
	
	for(i=0; i<n; i++)
	{
		printf("enter id\t\t :");
		scanf("%d",&s.id);
		
		printf("enter name\t\t :");
		scanf("%s",&s.name);
		
		printf("enter age\t\t :");
		scanf("%d",&s.age);
		
		printf("enter course\t\t :");
		scanf("%s",&s.course);
		
		printf("enter city\t\t :");
		scanf("%s",&s.city);
		
		printf("enter standard\t  :");
		scanf("%d",&s.standard);
		
		printf("enter scl\t\t :");
		scanf("%s",&s.scl);
	}
	
	printf("\n\nid\t\t name\t\t age\t\t course\t\t city\t\t standard\t\t scl\t\t\n**********    **********    **********    **********    **********    **********    **********\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d\t\t%s\t\t%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t\n",s.id,s.name,s.age,s.course,s.city,s.standard,s.scl);
	
	}
	
}
