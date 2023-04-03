#include<stdio.h>
int main()
{
	int a=6,b=7;
	printf("%d %d %d %d %d %d",++a,a++,b++,++a+b,++b,++a);
//								10	8	8	16	 9 10
	return 0;
}
