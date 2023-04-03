//write Code to take input values for the array from the user and display it.
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
	printf("The Array is: ");
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
