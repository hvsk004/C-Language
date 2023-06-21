#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("zero000.txt","w");
	fprintf(fptr,"Hello, World!");
	fclose(fptr);
	return 0;
}
