#include <stdio.h>

int main() {
    double var1, var2;
    double *pt1, *pt2;

    // user input
    printf("Enter value for var1: ");
    scanf("%lf", &var1);
    printf("Enter value for var2: ");
    scanf("%lf", &var2);

    // assign pointers
    pt1 = &var1;
    pt2 = &var2;

    // multiply variables by 10 using pointers
    *pt1 *= 10;
    *pt2 *= 10;

    // output
    printf("\nvar1 = %.1f\n", var1);
    printf("var2 = %.1f\n", var2);
    printf("\n");
    printf("var1 has address: %p\n", (void *)pt1);
    printf("var2 has address: %p\n", (void *)pt2);
    printf("pt1 has value: %.1f\n", *pt1);
    printf("pt2 has value: %.1f\n", *pt2);

    return 0;
}