#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char filename[50];
	char ch;
	int count=0;
	printf("Enter File name: ");
	gets(filename);
	fp=fopen(filename,"rt");
	if(fp==NULL)
	{
		printf("File not found");
		exit(1);
	}
	while(1)
	{
		ch=fgetc(fp);
		if(feof(fp))
		{
			break;
		}
		if(ch==" ")
		{
			count++;
		}
		if(!isalnum(ch))
		{
			count++;
		}
		
	}
	fclose(fp);
	printf("The Count is: %d",count);
	return 0;
}
