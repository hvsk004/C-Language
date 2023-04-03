//Write a C program where you consider two arrays. Take user input for the first array and modify this input and store it inside the second array and display both the arrays.
//Modification : Multiply by 2
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter %d Inputs one by one Press enter after every input : \n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=2*a[i];
	}
	printf("The First Array is: \n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("The Second Array is: \n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
}

 
