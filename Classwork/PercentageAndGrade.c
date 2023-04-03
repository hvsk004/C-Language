//Write a C Program to calculate the percentage and find the grade.
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	printf("Enter the marks: ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	float avg;
	avg=(s1+s2+s3+s4+s5)/5;
	if(avg>=80)
	{
		printf("Your Percentage is %f and Your grade is A",avg);
	}
	else if(avg>=60 && avg<=79)
	{
		printf("Your Percentage is %f and Your grade is B",avg);
	}
	else if(avg>=40 && avg<=59)
	{
		printf("Your Percentage is %f and Your grade is C",avg);
	}
	else
	{
		printf("Your Percentage is %f and Your grade is D",avg);
	}
	return 0;
}
