//Write a C Program to find wether the given number is perfect number or not
#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i=1;
	while(i<=n/2)
	{
		if(n%i==0)
		{ 
			s+=i;
		}
		i++;
	}
	if(n==s)
	{
		printf("%d is a Perfect number",n);
	}
	else
	{
		printf("%d is not a Perfect number",n);
	}
	return 0;
}
