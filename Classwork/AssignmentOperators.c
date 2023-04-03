#include<stdio.h>
void main()
{
	int a=2, b=4;
	a+=b;
	printf("%d \n",a);
	printf("%d\n",a-=b);
	printf("%d",b-=a);
}
