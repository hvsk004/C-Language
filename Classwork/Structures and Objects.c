#include<stdio.h>
struct number
{
	int x;
	float y;
}n3,n4;
int main()
{
	struct number n1;
	n1.x=24;
	n1.y=24.7893;
	printf("n1: %d  %f\n",n1.x,n1.y);
	struct number n2={28,28.67};
	printf("n2: %d  %f\n",n2.x,n2.y);
	n3.x=90;
	n3.y=99.9;
	n4.x=66;
	n4.y=67.5;
	printf("n3: %d  %f\n",n3.x,n4.y);
	printf("n4: %d  %f\n",n4.x,n4.y);
	
	return 0;
} 
