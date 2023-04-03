//Insert a value between an array
#include<stdio.h>
int insert(int n,int n1,int a[n+n1]);
int main()
{
	int n,n1;
	printf("Enter the size of the intial array: ");
	scanf("%d",&n);
	printf("How many elements do you want to insert: ");
	scanf("%d",&n1);
	int a[n+n1];
	for(int i=0;i<n;i++)
	{
		printf("%d index value of the array: ",i);
		scanf("%d",&a[i]);
	}
	insert(n,n1,a[n+n1]);
	return 0;
}
int insert(int n,int n1,int arr[n+n1])
{

		int v,k;
		printf("Enter the %d value to be inserted: ",i);
		scanf("%d",&v);
		printf("Enter the Postion of the value: ");
		scanf("%d",&k);
		for(int i=n-1;i>=k-1;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[k-1]=v;

}
