//Create two user defined functions to check wether the given number is positive or negative and if the value was positive
// return the value to the another function and check wether its even or odd and print the value.
#include<stdio.h>
int nature();
void evenOrOdd();
void main()
{		
	evenOrOdd();
}
int nature()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	if (n>=0)
	{
		return n;
	}
	else{
		return -1;
	}
}
void evenOrOdd()
{
	int num=nature();
	if (num!=-1)
	{
		if(num%2==0)
		{
			printf("%d is Even",num);
		}
		else
		{
			printf("%d id Odd",num);
		}
	}
	else
	{
		printf("It is a Negative Number",num);
	}

}
