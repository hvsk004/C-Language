//Reverse a Number using Recurison
#include<stdio.h>
int rev(n);
int ans=0;
int main()
{
	int num;
	printf("Enter a Number to reverse: ");
	scanf("%d",&num);
	printf("The reverse of the number is %d",rev(num));
	return 0;
}
int rev(n)
{
	if (n==0)
	{
		return ans;
	}
	else
	{
		ans=ans*10+n%10;
		return rev(n/10);
	}
	
}
