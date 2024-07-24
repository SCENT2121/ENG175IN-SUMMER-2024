//Determining if a letter is a vowel

#include <stdio.h>

int main() {
    char letter;
    
    // Prompt user for input
    printf("Enter a letter: ");
    scanf(" %c", &letter);
    
    // Check if the letter is a vowel using if-else statement
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        printf("%c is a vowel.\n", letter);
    } else {
        printf("%c is not a vowel.\n", letter);
    }
    
    return 0;
}

