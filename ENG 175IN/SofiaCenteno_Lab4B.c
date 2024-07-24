// Multiplicatiion table

#include <stdio.h>

int main() {
    int number, i = 1;

    // user input number
    printf("Enter a number to generate its multiplication table (up to 10): ");
    scanf("%d", &number);

    // print table using do-while loop
    printf("Multiplication table for %d:\n", number);
    do {
        printf("%d * %d = %d\n", number, i, number * i);
        i++;
    } while (i <= 10);

    return 0;
}
