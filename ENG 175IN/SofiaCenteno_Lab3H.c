// Letter or number

#include <stdio.h>

int main() {
    char input;

    // user input character
    printf("Enter a character: ");
    scanf(" %c", &input);

    // check if the input is a letter (uppercase or lowercase)
    if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) {
        printf("%c is a letter.\n", input);
    }
    // check if the input is a number
    else if (input >= '0' && input <= '9') {
        printf("%c is a number.\n", input);
    }
    // If neither a letter nor a digit
    else {
        printf("%c is neither a letter nor a number.\n", input);
    }

    return 0;
}