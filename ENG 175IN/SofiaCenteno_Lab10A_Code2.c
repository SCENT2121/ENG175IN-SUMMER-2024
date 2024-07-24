// determine the zeros of the equation using the quadratic formula
// code 2: read the file and perform the calculation

#include <stdio.h>
#include <math.h>

int main() {
    // coefficients of y = x^2 - 4
    float a = 1.0;
    float b = 0.0;
    float c = -4.0;
    
    // calculate zeros using quadratic formula
    float zero1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    float zero2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    
    printf("Zero 1 = %.2f\n", zero1);
    printf("Zero 2 = %.2f\n", zero2);
    
    // open file preserve previous contents
    FILE *file = fopen("coefficients.txt", "a");
    
    // write coefficients to the file
    fprintf(file, "a = %.2f\n", a);
    fprintf(file, "b = %.2f\n", b);
    fprintf(file, "c = %.2f\n", c);
    
    // close file
    fclose(file);
    
    return 0;
}