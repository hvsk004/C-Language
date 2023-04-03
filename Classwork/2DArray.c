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
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
}
