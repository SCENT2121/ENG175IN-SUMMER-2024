// Split and combine strings

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[50];  // max length of senetnce is 50
    char string1[50] = "";    // initialize string1 with an empty string
    char string2[50] = "";    // initialize string2 with an empty string

    // user input sentence
    printf("Enter a sentence (at least 4 words): ");
    scanf(" %[^\n]", sentence);  // Read entire line of input until newline

    // find midpoint of the sentence
    int len = strlen(sentence);
    int mid = len / 2;

    // pplit the sentence into two strings
    strncpy(string1, sentence, mid);  // copy first half to string1
    strcpy(string2, sentence + mid); // copy second half to string2

    // print the original strings and the combined string
    printf("\nString 1: %s\n", string1);
    printf("String 2: %s\n", string2);
    printf("Combined String: %s %s\n", string1, string2);

    return 0;
}