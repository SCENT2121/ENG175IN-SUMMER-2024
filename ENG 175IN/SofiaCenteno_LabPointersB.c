// calculate length of string useing pointers

#include <stdio.h>

// calculate length of a string using pointers
int stringLength(const char *str) {
    const char *ptr = str; // initialize pointer to the start of the string
    int length = 0;

    while (*ptr != '\0') {
        length++; 
        ptr++; // move pointer to next character
    }

    return length; // return length of string
}

int main() {
    char str[100];

    // user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = stringLength(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("The size of the string is %d\n", stringLength(str));

    return 0;
}