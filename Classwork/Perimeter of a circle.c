//calculate perimeter of a circel when radius is given
#include<stdio.h>
int main()
{
	float radius,pi,ans;
	pi=3.14;
	printf("Enter the raidus of the circle: ");
	scanf("%f",&radius);
	ans=2*pi*radius;
	int res=(int)ans;
	printf("The radius is %f\n",ans);
	printf("%d",res);
}
