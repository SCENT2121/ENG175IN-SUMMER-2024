// Write a program that passes an array to a UDF

#include <stdio.h>

// function def
double sumArray(double arr[], int size);

int main() {
    double array[100], sum = 0;
    int size;

    // user input
    printf("Enter number of elements (max 100): ");
    scanf("%d", &size);

    // input array elements
    printf("Enter %d elements, each followed by a space:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%lf", &array[i]);
        sum += array[i]; // calculate sum using the sumArray function
    }

    printf("Sum of the array elements: %.2lf\n", sum);

    return 0;
}