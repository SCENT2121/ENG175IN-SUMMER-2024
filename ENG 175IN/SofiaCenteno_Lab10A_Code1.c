// determine the zeros of the equation using the quadratic formula
// code 1: Write a code to put a, b, and c into a file

#include <stdio.h>

int main() {
    // coefficients a, b, & c of y = x^2 - 4
    float a = 1.0;
    float b = 0.0;
    float c = -4.0;
    
    // open file
    FILE *file = fopen("coefficients.txt", "w");
    
    // write coefficients to the file
    fprintf(file, "%.2f\n", a);
    fprintf(file, "%.2f\n", b);
    fprintf(file, "%.2f\n", c);
    
    // close file
    fclose(file);
    
    printf("a, b, and c have been written to file coefficients.txt.\n");
    
    return 0;
}