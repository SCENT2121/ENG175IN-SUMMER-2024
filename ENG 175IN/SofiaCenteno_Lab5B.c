// calculating sum

#include <stdio.h>

int main() {
    int lower, upper;
    printf("Enter lower bound: ");
    scanf("%d", &lower);
    printf("Enter upper bound: ");
    scanf("%d", &upper);

    // size of the array
    int size = upper - lower + 1;
    int terms[size];
    int sum = 0;

    // calculate each term and store in array
    for (int i = lower; i <= upper; i++) {
        terms[i - lower] = i * (i + 1);
    }

    printf("Terms in the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", terms[i]);
        sum += terms[i];
    }

    // sum of the array
    printf("\nSum of the array: %d\n", sum);

    return 0;
}