// write a 4-word sentence, code 2: read the file and print it to the computer

#include <stdio.h>

int main() {
    // from code 1 - write sentence to a file
    FILE *file = fopen("sentence.txt", "w");
    if (file) {
        fprintf(file, "I love to sleep\n");
        fclose(file);
    }

    // read the sentence from the file and print it
    file = fopen("sentence.txt", "r");
    if (file) {
        char buffer[20]; // enough to hold my sentence
        if (fgets(buffer, sizeof(buffer), file)) {
            printf("Sentence read from file: %s", buffer);
        }
        fclose(file);
    }

    return 0;
}