// write a program to find the quotient and remainder after dividing two numbers

#include <stdio.h>

// UFD to find the quotient of two numbers
double findQuotient(int dividend, int divisor) {
    return (double)dividend / divisor;
}

// UFD to find the remainder of two numbers
int findRemainder(int dividend, int divisor) {
    return dividend % divisor;
}

int main() {
    int dividend, divisor;
    double quotient; // quotient declared as double for floating-point precision
    int remainder;

    // user input
    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // calculate quotient and remainder
    quotient = findQuotient(dividend, divisor);
    remainder = findRemainder(dividend, divisor);

    // uutput with precision up to 2 decimal places
    printf("Quotient: %.2lf\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}