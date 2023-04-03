//Write a C Program to find the complete sum of the elements in an array.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d Inputs one by one, Press enter after every input : \n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("The Sum is %d",sum);
	return 0;
}
