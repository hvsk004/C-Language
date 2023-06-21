#include <stdio.h>
#include <string.h>

int main() {
    char names[3][50] = {"John", "Mary", "David"};
    int i;

    for (i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

