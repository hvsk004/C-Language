#include<stdio.h>
int sum(int b[], int size);
int main()
{
	int size;
	scanf("%d",&size);
	int a1[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a1[i]);
	}
	sum(a1,size);	
	return 0;
}
int sum(int b[],int size)
{
	int s=0;
	for(int i=0;i<size;i++)
	{
		s=s+b[i];
	}
	printf("%d",s);
}
