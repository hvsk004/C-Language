//Write a user defined function to print the factors of a given input
#include<stdio.h>


void main()
{
	void factor()
{
	int num,count=0;
	printf("Enter A Number : ");
	scanf("%d",&num);
	for(int i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			printf("%d is a factor of %d\n",i,num);
			
		}
	}
	
}
	factor();
}
