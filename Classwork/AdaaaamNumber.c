#include<stdio.h>
int rev(n1);
int square(n2);
int main()
{
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);
	printf("%d %d\n",num,rev(num));
	printf("%d %d\n",square(num),square(rev(num)));
	printf("%d\n",rev(144));
	printf("%d == %d\n",square(num),rev(square(rev(num))));
	if(square(num)==rev(square(rev(num))))
	{
		printf("It is an Adam Number");
	}
	else
	{
		printf("It is not an Adam Number");
	}
	
	return 0;
}
int rev(n1)
{
	int revn;
	while(n1>0)
	{
		revn=revn*10+n1%10;
		n1=n1/10;
	}
	return revn;
}
int square(n2)
{
	int sqr=n2*n2;
	return sqr;
}
