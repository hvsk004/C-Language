//Write a C program to print the Transpose of a Matrix
#include<stdio.h>
int main()
{
	int m,n;
	printf("The number of rows: ");
	scanf("%d",&m);
	printf("Enter the number of Columns:");
	scanf("%d",&n);
	int a[m][n];
	int i,j;
	for( i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			printf("Enter the value of a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Intial Matrix: \n");
	for(i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("The Transpose of the matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",a[j][i]);
		}
		printf("\n");
	}

}
