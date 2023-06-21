#include<stdio.h>
struct Person
{
	char name[20];
	int age;	
	struct Student
	{
		int regno;
	}s;
};
int main()
{
	struct Person p;
	printf("Enter the name: ");
	scanf("%s",&p.name);
	printf("Enter the Age: ");
	scanf("%d",&p.age);
	printf("Enter the RegNo: ");
	scanf("%d",&p.s.regno);
	printf("The Values are: \n");
	printf("Name: %s\n",p.name);
	printf("Age: %d\n",p.age);
	printf("Regno: %d\n",p.s.regno);
}
