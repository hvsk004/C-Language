#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	printf("Enter a Single charecter: ");
	scanf("%c",&ch);
	fptr=fopen("test.txt","w");
	fputc(ch,fptr);
	fclose(fptr);
	fptr=fopen("test.txt","r");
	char c=fgetc(fptr);
	printf("The Charecter is: %c",c);
	return 0;
}
