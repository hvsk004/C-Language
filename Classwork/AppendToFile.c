#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch[200];
	fptr=fopen("zero000.txt","a");
	fprintf(fptr,"\nC Program");
	fclose(fptr);
	return 0;
}
