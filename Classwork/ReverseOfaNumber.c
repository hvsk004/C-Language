#include<stdio.h>                       /*Write a user defined function to return the reverse of a number using call by refference method*/
#include<math.h>
int Reverse(int *num);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int *a;
	a=&n;
	printf("The Reverse Of the Number is: %d",Reverse(a));
	return 0;
}
int Reverse(int *num)
{
	int ans=0,temp,count=0;
	temp=*num;
	while(*num!=0)
	{
		temp=*num%10;
		*num=*num/10;
		ans=ans*10+temp;
	}
	return ans;

}
