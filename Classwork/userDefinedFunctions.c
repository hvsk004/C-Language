//User Defined Functions with return statement;
#include<stdio.h>
int main()
{
	int c = sum();
	printf("The Sum is: %d",c);
}
int sum()
{
	int a,b;
	printf("Enter any two numbers : ");
	scanf("%d%d",&a,&b);
	return a+b;
}
