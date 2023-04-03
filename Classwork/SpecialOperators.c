#include<stdio.h>
int main()
{
	int a=2;
	float pi=3.14;
	double b=1223.3245;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(pi));
	printf("%d\n",sizeof(b));
	int c=(int)b;
	printf("%d",sizeof(c));
	return 0;
}
