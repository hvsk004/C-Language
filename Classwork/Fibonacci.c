//Write a Recursive Function to print the Fibonacci Series
#include<stdio.h>
int fib(int n);
int main()
{
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		printf("%d\n",fib(i));
	}
	return 0;

}
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
