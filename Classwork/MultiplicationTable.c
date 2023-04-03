//Write a C Program to print the multiplication table of a given number using a while loop
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter any Integer: ");
	scanf("%d",&n);
	printf("%d Table is:\n",n);
	while(i<=20)
	{
		printf("%d x %d = %d\n",n,i,n*i);
		i++;
	}
	return 0;
}
