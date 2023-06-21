#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch[200];
	fptr=fopen("zero000.txt","r");
	while(fscanf(fptr,"%s",ch)!=EOF)
	{
		printf("%s ",ch);
	}
//	fscanf(fptr,"%s",ch);
//	printf("%s",ch);
	fclose(fptr);
	return 0;
}
