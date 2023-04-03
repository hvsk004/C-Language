#include<stdio.h>
int sum(int a);
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",sum(num));
	return 0;
}
int sum(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return a+sum(a-1);
	}
}
