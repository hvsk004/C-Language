//Write a C Program with a user defined function to count the number of digits in a given Number
#include<stdio.h>
void count()
{
	int n,count=0;
	printf("Enter a Number: ");
	scanf("%d",&n);
	int temp=n;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	printf("The Number of digits is : %d",count);
}
void main()
{
	count();
}
