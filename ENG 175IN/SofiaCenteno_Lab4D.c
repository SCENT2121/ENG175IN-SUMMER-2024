#include <stdio.h>

int main() {
    int number, sum = 0, remainder;

    // user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // calculate sum of digits
    while (number != 0) {
        remainder = number % 10;
        sum += remainder;      
        number = number / 10;
    }

    // print sum of digits
    printf("Sum of digits = %d\n", sum);

    return 0;
}