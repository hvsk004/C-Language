#include<Stdio.h>
int sum(int *a,int *b);
int main()
{
	int a1,b1;
	printf("Enter Two numbers: ");
	scanf("%d %d",&a1,&b1);
//	int c = sum(&a1,&b1);
//	printf("%d",c);
	printf("%d is the Sum",sum(&a1,&b1));
	return  0;
}
int sum(int *a,int *b)
{
	return(*a+*b);
}
