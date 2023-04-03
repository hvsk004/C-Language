#include<stdio.h>
void main(){
	int a=4,b=2,c;
	printf("a=%d,b=%d\n",a,b);
	c=a;//storing value of a in a temporary variable c
	a=b;
	b=c;
	printf("a=%d,b=%d",a,b);
}
