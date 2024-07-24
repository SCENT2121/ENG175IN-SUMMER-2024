// Sum of expression from 1 to 10

#include <stdio.h>

int main() {
    int sum = 0;

    // calculate and print the expression for x = 1 to 10
    for (int x = 1; x <= 10; x++) {
        int result = 3 * x - 7;
        sum += result;
        printf("For x = %d, 3x - 7 = %d\n", x, result);
    }

    // print total sum
    printf("Sum of the expression for x = 1 to 10: %d\n", sum);

    return 0;
}
