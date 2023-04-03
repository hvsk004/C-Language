#include<stdio.h>
int main()
{
	//Control Structures:
	/*Descion Making statements,Loops,etc.
	A control structure refers to the way in which the prpgramer specifies the order
	in which the programmer specifies the order of executing the statements*/
	
	
	//Write a c program to check wether the given input is positive or negative
	float n;
	printf("Enter a Number: ");
	scanf("%f",&n);
	if(n>0)
	{
		printf("It is a Positive Number");
		
	}
	else
	{
		printf("It is a negative number");
	}
	return 0;
}
