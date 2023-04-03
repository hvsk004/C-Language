//Write a user defined function to find the sum of n natural numbers and return the sum value
#include<stdio.h>
int sumofn();
void main()
{
	int ans= sumofn();
	printf("The sum is: %d",ans);
}
int sumofn()
{
	int n,sum=0;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
