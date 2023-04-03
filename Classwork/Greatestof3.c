//Write a C program to find greatest of three Numbers
#include<stdio.h>
int main()
{
	int a,b,c;//Intializing three variables for the input
	printf("Enter the three numbers seperated by a space in between: ");
	scanf("%d%d%d",&a,&b,&c);//Taking Input
	if(a>b && a>c)
	{
		printf("%d is the greatest number",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is the greatest number",b);
	}
	else
	{
		printf("%d is the greatest number",c);
	}
	return 0;
}

