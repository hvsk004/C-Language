#include<stdio.h>
union number{
	int a;
	char name[20];
	float y; 
};
int main()
{
	union number n;
	printf("%d",sizeof(n));
	return 0;
}
