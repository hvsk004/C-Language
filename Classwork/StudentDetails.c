//Write C Program to create a file which consists Name, Regno and marks of a Student using File Handling.
#include<stdio.h>
int main()
{
	int n;
	FILE *fptr;
	fptr=fopen("StudentData.txt","w");
	printf("Enter The Number of Students: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char ch[25];
		int regno;
		float marks;
		printf("Enter The Details of Student %d : \n",i+1);
		fprintf(fptr,"Student %d: \n",i+1);
		printf("Enter The Name: ");
		scanf("%s",&ch);
		fprintf(fptr,"Name: %s\t",ch);
		printf("Enter The Registration Number: ");
		scanf("%d",&regno);
		fprintf(fptr,"Registartion Number: %d\t",regno);
		printf("Enter the marks: ");
		scanf("%f",&marks);
		fprintf(fptr,"Marks: %f\n",marks);
	}
	fclose(fptr);
	
	return 0;
}
