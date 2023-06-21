#include<stdio.h>
struct number{
	int a;
	float b;
}n1,*n2;
int main()
{
	n2=&n1;
	printf("Enter the value of a: ");
	scanf("%d",&n2->a);
	printf("Enter the value of b: ");
	scanf("%f",&n2->b);
	printf("The entered values of a and b are:\n");
	printf("a: %d\nb: %f",n2->a,n2->b);
	return 0;
}
