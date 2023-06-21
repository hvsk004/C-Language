#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size = 1000;
    char arr[100];
    printf("\n%d\n",sizeof(arr));
    char *s1 = (char*) malloc(size * sizeof(char));
    printf("size intial : %d\n",sizeof(s1));
    printf("Enter a s1ing: ");
    gets(s1);
    printf("You entered: %s\n", s1);
    int len = strlen(s1);
    s1=(char*)realloc(s1,len*sizeof(char));
    free(s1);
    s1[0]='\0';
	printf("\n\n%d\n",sizeof(s1));
	printf("%s",s1);
    return 0;
}

