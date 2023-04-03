#include<stdio.h>
int num(int n);
int main()
{
	int n1;
	scanf("%d",&n1);
	printf("%d",num(n1));
}
int num(int n)
{
	if(n%2==0)
	{
		return n;
	}
	else
	{
		return 0;
	}
}
