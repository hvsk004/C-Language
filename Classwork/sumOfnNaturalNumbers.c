//Write a program to find the sum of n natural numbers
#include<stdio.h>
int main()
{
	int n,sum=0,i=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("The sum is %d",sum);
	return 0;
}
