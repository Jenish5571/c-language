#include<stdio.h>

struct employee
{
	int id;
	char name[10];
	int age;
	char role[10];
	char city[10];
	int experience;
	char company_name[20];	
};
int main()
{
	int n,i;
	
	printf("enter number of employee :");
	scanf("%d",&n);
	
	struct employee emp;
	
	for(i=0; i<n; i++)
	{
		printf("enter id\t :");
		scanf("%d",&emp.id);
		
		printf("enter name\t :");
		scanf("%s",&emp.name);
		
		printf("enter age\t :");
		scanf("%d",&emp.age);
		
		printf("enter role\t :");
		scanf("%s",&emp.role);
		
		printf("enter city\t :");
		scanf("%s",&emp.city);
	
		printf("enter experience :");
		scanf("%d",&emp.experience);
		
		printf("enter company_name\t :");
		scanf("%s",&emp.company_name);
	}
	
	for(i=0; i<n; i++)
	{
		printf("id\t : %d\n",emp.id);
		printf("name\t : %s\n",emp.name);
		printf("age\t : %d\n",emp.age);
		printf("role\t : %s\n",emp.role);
		printf("city\t : %s\n",emp.city);
		printf("experience\t : %d\n",emp.experience);
		printf("company_name\t : %s\n",emp.company_name);
	}
	
}
