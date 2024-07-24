// create a function which behaves similar to the math.h pow() function

#include <stdio.h>
#include <math.h>

// function to calculate power of base raised to exponent
double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    double base, exponent, result;

    // user input
    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    // calculate power using power function
    result = power(base, exponent);

    printf("%.2lf ^ %.2lf = %.2lf\n", base, exponent, result);

    return 0;
}