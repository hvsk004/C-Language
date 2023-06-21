#include <stdio.h>

int main() {
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

    return 0;
}

