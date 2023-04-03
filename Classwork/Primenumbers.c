#include<stdio.h>
void main()
{
	int flag=0;
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is a Prime Number",n);
	}
	else{
		printf("%d is not a Prime number",n);
	}
}
