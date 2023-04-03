#include<stdio.h>
int main()
{
	int a[5] = {12,34,56,62,67};
	for(int i=0;i<5;i++)
	{
		printf("Index   Value\n");
		printf("%d    -    %d\n",i,a[i]);
	}
	return 0;
} 
