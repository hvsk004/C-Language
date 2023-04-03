#include<stdio.h>
struct car
{
	char name[20];
	int year;
	float price;
};
int main()
{
//	struct car c1;

//	c1.name="BMW";
//	c1.year=2023;
//	c1.price=459.123;
//	printf("car 1: \nName: %s\nYear: %d\nPrice: %f",c1.gen,c1.name,c1.year,c1.price);
	struct car c2;
	printf("Enter the Name: ");
	gets(c2.name);
	printf("Enter the Year: ");
	scanf("%d",&c2.year);
	printf("Enter the price: ");
	scanf("%f",&c2.price);
	printf("Car 2: \nName: %s\nYear: %d\nPrice: %f",c2.name,c2.year,c2.price);
}

