//Write a Recursive Function to find the Factorial of a Function
#include<stdio.h>
int fact(int n);
int main()
{
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	printf("The Factorial is %d",fact(num));
	return 0;
}
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
