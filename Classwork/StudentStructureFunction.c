//Create a Student structure which includes Name, Regno, and marks of three subjects.
//Write a function Calculate which Calculates the Percentage of marks and display it with the student details.
#include<Stdio.h>
struct Student{
	char name[20];
	int regno;
	int marks[3];
};
void calculate(struct Student s)
{
	int total=0;
	for(int i=0;i<3;i++)
	{
		total+=s.marks[i];
	}
	float avg;
	avg=total/3;
	printf("The Percentage is: %.2f%",avg);
}
int main()
{
	struct Student s1;
	printf("Enter the Name of the Student: ");
	gets(s1.name);
	printf("Enter the Regno: ");
	scanf("%d",&s1.regno);
	for(int i=0;i<3;i++)
	{
		printf("Enter Marks of Subject %d :",i+1);
		scanf("%d",&s1.marks[i]);	
	}
	calculate(s1);
	return 0;
}
