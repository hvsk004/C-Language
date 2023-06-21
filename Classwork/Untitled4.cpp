//Create a Structure Person which include name and age
#include<Stdio.h>
struct Person
{
	char name[25];
	int age;	
};
int main()
{
	struct Person p;
	printf("Enter the Name: ");
	gets(p.name);
	printf("Enter the Age: ");
	scanf("%d",&p.age);
	
}
