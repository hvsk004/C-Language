//Take a 2D array and print the elements in the first diagonal
#include<stdio.h>
int main()
{
	int m,n;
	printf("The number of rows: ");
	scanf("%d",&m);
	printf("Enter the number of Columns:");
	scanf("%d",&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Enter the value of a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
//	printf("The First Diagoanl Elements: ");
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			if(i==j)
//			{
//				printf("%d ",a[i][j]);
//			}
//		}
//	}
//	printf("\nThe second diagonal Elements: ");
 for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i+j==m-1)
			{
				a[i][j]=1;
			}
		}
	}
}
