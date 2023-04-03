//Intro to Call By Reference Functions
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Number: ");
	scanf("%d",&a); // '&' ---> is used to specify the memory address of the variable 
	printf("%d is the Memory Address of %d",&a,a);
	return 0;
}
