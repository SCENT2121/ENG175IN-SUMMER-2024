// Perfect number

#include <stdio.h>

int main() {
    int number, sum_of_divisors;
    char choice;

    do {
        // initialize variables for each input
        sum_of_divisors = 0;

        // prompt for input
        printf("Enter a number to determine if it's a perfect number: ");
        scanf("%d", &number);

        // calculate sum of proper divisors
        for (int i = 1; i <= number / 2; ++i) {
            if (number % i == 0) {
                sum_of_divisors += i;
            }
        }

        // determine if number is perfect
        if (sum_of_divisors == number) {
            printf("%d is a perfect number.\n", number);
        } else {
            printf("%d is not a perfect number.\n", number);
        }

        // prompt user to continue or exit
        printf("Do you want to try another number? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");

    return 0;
}