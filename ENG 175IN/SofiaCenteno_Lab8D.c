// write a program that has an array of ages

#include <stdio.h>

// UDF to print sec and third elements
void printSecAndThird(int arr[], int size);

void printSecAndThird(int arr[], int size) {
    if (size >= 3) {
        printf("Second element: %d\n", arr[1]);
        printf("Third element: %d\n", arr[2]);
    } else {
        printf("Array size is less than 3\n");
    }
}

int main() {
    // array of ages
    int ages[4]; // array size 4

    // user input ages
    printf("Enter four ages separated by spaces: ");
    scanf("%d %d %d %d", &ages[0], &ages[1], &ages[2], &ages[3]);

    // printing the array elements horizontally
    printf("array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d", ages[i]); 
        if (i < 3) {
            printf(", "); // comma after all except last element
        }
    }
    printf("\n");

    // print second and third elements
    printSecAndThird(ages, 4);
    
    return 0;
}