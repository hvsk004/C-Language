#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp1,*fp2;
	char ch1,ch2;
	int mismatch=0,position=0,line=1;
	fp1=fopen("test.txt","r");
	fp2=fopen("test2.txt","r");
	if(fp1==NULL || fp2==NULL)
	{
		printf("Error finding files.");
		exit(1);
	}
	while(1)
	{
		position++;
		ch1=fgetc(fp1);
		ch2=fgetc(fp2);
		{
			if(ch1== EOF || ch2==EOF)
			{
				break;
			}
			if(ch1=='\n' && ch2=='\n')
			{
				position=0;
				line++;
			}
			if(ch1!=ch2)
			{
				mismatch++;
				printf("Mismatch %d at Line: %d Position: %d\n",mismatch,line,position);
				break;
			}
			
		}
	}
	return 0;
}
