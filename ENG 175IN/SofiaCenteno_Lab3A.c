#include <stdio.h>

int main() {
    int num;

    // user input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // check if number is even or odd using if-else
    if (num % 2 == 0) {
         printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}