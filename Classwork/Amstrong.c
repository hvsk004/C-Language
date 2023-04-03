
//	Break statement does not terminate the program it terminates the loop
//  Continue statement skips the code in the loop for a particular iteration. For a given condition.	
//Write a C program to reverse a number to find wether the given number is amstrong or not.

#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,num=0,r,sum=0;
	printf("Enter a Numner: ");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		temp=temp/10;
		num++;
	}
	int temp2=n;
	while(temp2!=0)
	{
		r=temp2%10;
		sum=sum+pow(r,n);
		temp2=temp2/10;
	}
	printf("Count is :%d\n",num);
	printf("sum is : %d\n",sum);
	if(sum==n)
	{
		printf("%d is an Amstrong Number",n);
	}
	else
	{
		printf("%d is not an amstrong number",n);
	}
}
