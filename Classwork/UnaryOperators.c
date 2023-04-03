#include<stdio.h>
void main()
{
	for(int i=0;i<10;i++)
	{
		printf("%d",i);
	}
	printf("\n");
	for(int i=9;i>=0;i--)
	{
		printf("%d",i);
	}
	printf("\n");
	int a=5;
	int c=a++;
	printf("c=%d,a=%d\n",c,a);
	int d=++a;
	printf("d=%d,a=%d",d,a);
}
