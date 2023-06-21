#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int *p1,*p2;
	*p1=malloc(4);
	*p1=10;
	*p2=free(p1);
	printf("%d\n",*p2);
	return 0;
}

