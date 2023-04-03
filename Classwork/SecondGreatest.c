//Write a C Program to find the second Largest number among the Three Numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the Numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		if(b>c)
		{
			printf("%d is the second greatest number",b);
		}
		else
		{
			printf("%d is the greatest number",c);
		}
	}
	else if(b>a && b>c)
	{
		if(a>c)
		{
			printf("%d is the second greatest number",a);
		}
		else
		{
			printf("%d is the greatest number",c);
		}
	}
	else
	{
		if(b>a)
		{
			printf("%d is the second greatest number",b);
		}
		else
		{
			printf("%d is the greatest number",a);
		}
	}
	return 0;
}
