// compute the sum of all elements in an array using pointers, print address of each element

#include <stdio.h>

int main() {
    // initialize array with given values
    int arr[5] = {1, 2, 3, 4, 5};
    
    // declare a pointer and set it to point to the array
    int *ptr;
    ptr = arr;

    // initialize a variable to store the sum
    int sum = 0;
    int i;

    // loop through the array
    printf("Array elements and their addresses:\n");
    for (i = 0; i < 5; i++) {
        printf("Value: %d, Address: %p\n", *(ptr + i), (ptr + i));
        
        // add the value of each element to the sum
        sum = sum + *(ptr + i);
    }

    printf("The sum of the elements is %d\n", sum);

    return 0;
}
