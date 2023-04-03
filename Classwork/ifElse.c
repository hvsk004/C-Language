//Write a C program to check wether the given integer is divisible by 3 and 5
//Sample input:15
//Sample output:15 in divisible by 3 and 5
#include<stdio.h>
int main()
{
	int n;//Intializing a variable 'n' to store the Integer input
	printf("Enter a Number: ");
	scanf("%d",&n);
	if(n%3==0 && n%5==0)//If condition to check wether the given input ('n') is divisible by 3 and 5
	{
		printf("%d is divisible by 3 and 5",n);
	}
	else
	{
		printf("%d is not divisible by 3 and 5",n);
	}
}
