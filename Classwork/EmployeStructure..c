//Create a Structure Employee with members Name , ID and Salary
//Create 5 objects i.e Store data of % employees.
//Take the input from the user
//Display the Data in the output
#include<stdio.h>
struct Employe{
	char name[100];
	int EID;
	float salary;
};
int main()
{
	struct Employe e[5];
	for(int i=0;i<5;i++)
	{
		printf("Enter the details of the %d Employe : \n",i+1);
		printf("Enter the name: ");
		scanf("%s",e[i].name);
		printf("Enter the Id : ");
		scanf("%d",&e[i].EID);
		printf("Enter the Salary : ");
		scanf("%f",&e[i].salary);
		printf("\n");
	}
	for(int i=0;i<5;i++)
	{
		printf("Employe %d: \n",i+1);
		printf("Name: %s\n",e[i].name);
		printf("EID: %d\n",e[i].EID);
		printf("Salary: %\f",e[i].salary);
		printf("\n");
	}
	return 0;	
}
