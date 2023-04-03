//Write a C Program to perform  all the arthimetic operations through users choice
#include<stdio.h>
int main()
{
	printf("\t\t\t\tC Program to perform basic Arthimetic Operations\t\t\n");
	printf("Instructions:\nJust Enter the basic operation like x+y; Example: 9*2\n");
	float a,b;
	char c;
	scanf("%f%c%f",&a,&c,&b);
//	scanf("%f%f %c",&a,&b,&c);
	switch(c)
	{
		case '+':
			printf("%1.f + %1.f = %1.f",a,b,a+b);
			break;
		case '-':
			printf("%1.f - %1.f = %1.f",a,b,a-b);
			break;
		case '*':
			printf("%1.f * %1.f = %1.f",a,b,a*b);
			break;
		case '/':
			printf("%1.f / %1.f = %1.f",a,b,a/b);
			break;	
		case '%':
			printf("%1.f %% %1.f = %d",a,b,(int)a%(int)b);
			break;
		default:
			printf("Invalid Input");	
	}
	return 0;
}
