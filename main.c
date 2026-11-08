#include <stdio.h>

void wordSlpitter(char *str) {
    while(*str != '\0') {
        printf("Current char: %c\n", *str);

        str++;
    }
}

int main(void) {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    wordSlpitter(name);
}