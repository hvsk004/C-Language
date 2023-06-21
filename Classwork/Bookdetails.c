//Create a structure which contains Book Name, Year , and the Price.
#include<stdio.h>
struct Book{
	char ch[50];
	int year;
	float price;
};
int main()
{
	struct Book b1;
	printf("Enter The details of the book :\n");
	printf("Enter the Name: ");
	gets(b1.ch);
	printf("Enter the Year of Publishing: ");
	scanf("%d",&b1.year);
	printf("Enter The Price: ");
	scanf("%f",&b1.price);
	FILE *fptr;
	fptr=fopen("BookDetails.txt","w+");
	fwrite(&b1,sizeof(b1),1,fptr);
	fclose(fptr);
	fptr=fopen("BookDetails.txt","r");	
	fread(&b1,sizeof(b1),1,fptr);
	printf("%s %d %f",b1.ch,b1.year,b1.price);
	fclose(fptr);
	return 0;
}
