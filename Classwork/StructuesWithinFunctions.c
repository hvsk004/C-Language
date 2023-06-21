#include<stdio.h>
struct Emp{
	char name[20];
	int empid;
	float salary;
};
void display(struct Emp e)
{
	printf("The Emlpoye Details are: \n");
	printf("Name : %s\n",e.name);
	printf("Employee Id: %d\n",e.empid);
	printf("Salary: %f\n",e.salary);
}
int main()
{
	struct Emp e1;
	printf("Enter the Values \n\n");
	printf("Enter the name: ");
	scanf("%s",&e1.name);
	printf("Enter the EmpID: ");
	scanf("%d",&e1.empid);
	printf("Enter the Salary: ");
	scanf("%f",&e1.salary);
	display(e1);
	return 0;
}
