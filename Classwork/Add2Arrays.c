//Write a C program to perform addition of two One dimensional Arrays and store the sum in a new array.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the arrays: ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++)
	{
		printf("%d index value of first array: ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d index value of second array: ",i);
		scanf("%d",&b[i]);
	}
	for(int i=0;i<4;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("The sum is: \n");
	for(int i=0;i<n;i++)
	{
		printf("%d + %d = %d\n",a[i],b[i],c[i]);
	}
	return 0;
}

