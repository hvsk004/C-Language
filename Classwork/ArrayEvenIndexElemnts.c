//write a C program to print all the even position values inside the array.
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
	printf("The Elements in even positions are: \n");
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
