#include<stdio.h>
int main()
{
	char str[100],ch,sen[100];
	scanf("%c",&ch);
	scanf("\n");
	scanf("%[^\n]*c",str);
	scanf("\n");
	scanf("%[^\n]*c",sen);
	printf("%c\n",ch);
	printf("%s\n",str);
	printf("%s",sen);
	return 0;
}
