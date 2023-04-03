//Write a C program to delete an element
#include<stdio.h>
int main()
{
	int n,a[n];
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d index value of the array: ",i);
		scanf("%d",&a[i]);
	}
	int p;
	printf("Enter the position of the Element that should be deleted: ");
	scanf("%d",&p);
	for(int i=p-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("The new array is: \n")
	for(int i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
