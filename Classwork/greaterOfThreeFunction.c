/*Write a User Defined function to find the greatest of three numbers using call by value method*/
#include<stdio.h>
int greaterOfThree(int a,int b,int c);
int main()
{
	int a1,b1,c1;
	scanf("%d %d %d",&a1,&b1,&c1);
	greaterOfThree(a1,b1,c1);
	return 0;
}
int greaterOfThree(int a,int b,int c)
{
	if ((a>b)&&(a>c))
	{
		printf("%d is greater",a);
	}
	else if((b>a)&&(b>c))
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("%d is greater",c);
	}
}
