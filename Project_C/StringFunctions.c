#include<stdio.h>
#include<string.h>
void palindrome();
void uppercase();
void stringcompare();
void lowercase();
void arrayofstrings();
int main()
{
	int ch;
	do
	{
		printf("\n1.Palindrome\n2.Uppercase\n3.Compare\n4.Lowercase\n5.ArrayofStrins\n6.Exit\n");
		printf("\nEnter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				palindrome();
				break;
			case 2:
				uppercase();
				break;
			case 3:
				stringcompare();
				break;
			case 4:
				lowercase();
				break;
			case 5:
				arrayofstrings();
				break;
			case 6:
				printf("Thank You for using the Program\n");
			default:
				printf("Wrong Choice\n");
		}	
	}
	while(ch!=6);
	return 0;
}
void palindrome()
{
	char string[100];
    int i, length;
    int flag = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    length = strlen(string);

    for (i = 0; i < length; i++) {
        if (string[i] != string[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("%s is not a palindrome\n", string);
    } else {
        printf("%s is a palindrome\n", string);
    }
}
void uppercase()
{
	    char string[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", string);

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", string);
}
void stringcompare()
{
	char string1[100], string2[100];
    int i, flag = 0;

    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);

    for (i = 0; string1[i] != '\0' || string2[i] != '\0'; i++) {
        if (string1[i] != string2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0 && string1[i] == '\0' && string2[i] == '\0') {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

}
void lowercase()
{
	char string[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", string);

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", string);	
}
void arrayofstrings()
{
	char names[4][100] = {"Himanth", "Venkata", "Sai", "Krishna"};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
    }

}
