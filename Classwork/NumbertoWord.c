//Write a User defined function to print the value of input in words ---- Use Call by Value method
//Like if the input is 1 print one
//Range of input is from 1 to 7
#include<stdio.h>
void Word(int num);
int main()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	Word(n);
	return 0;
}
void Word(int num)
{
	switch(num)
	{
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6:
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		default:
			printf("Invalid Input");
			break;
	}
}
