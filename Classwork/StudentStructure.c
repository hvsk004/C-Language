//create a structure student which contains members student name, roll number and marks of three subjects, Take the user input
#include<stdio.h>
struct student
{
	char name[100];
	int roll_no;
	float marks[3];
};
int main()
{
	struct student s1;
	printf("Enter the Name: ");
	gets(s1.name);
	printf("Enter the Roll Number: ");
	scanf("%d",&s1.roll_no);
//	printf("Enter the Marks of first subject: ");
//	scanf("%f",&s1.m1);
//	printf("Enter the Marks of second subject: ");
//	scanf("%f",&s1.m2);
//	printf("Enter the Marks of third subject: ");
//	scanf("%f",&s1.m3);
	for(int i=0;i<3;i++)
	{
		printf("Enter the %d Subject Marks: ",i+1);
		scanf("%f",&s1.marks[i]);
	}
	printf("Name: %s\nRoll Number: %d\nMarks 1: %f\nMarks 2: %f\nMarks 3: %f\n",s1.name,s1.roll_no,s1.marks[0],s1.marks[1],s1.marks[2]);
	
}
