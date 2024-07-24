// write a 4-word sentence, code 1: write a code to put the sentence in a file

#include <stdio.h>

int main() {
    // sentence written to the file
    char sentence[] = "I love to sleep";

    // open file
    FILE *file = fopen("sentence.txt", "w");
    
    // write sentence to the file
        fprintf(file, "%s\n", sentence);
        printf("Sentence has been written to sentence.txt.\n");
        fclose(file); // close file

    return 0;
}