#include<stdio.h>
void main()
{
	int a = (1,2,3,4,5);
	double b;
	printf("a=%d\n",a);
//	Will only print 5 as the value of a
	printf("%d, %d\n",sizeof(a),sizeof(b));
//	TYPE CASTING
	float pi=3.14576;
	int c = (int)pi;
	printf("int pi=%d,%d",c,sizeof(c));
}
