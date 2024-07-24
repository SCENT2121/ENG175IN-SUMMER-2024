#include <stdio.h>

int main() {
    int size;
    int i = 0; 

    // user input
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    // outer loop - row
    while (i < size) {
        int j = 0; // initialize column counter
        
        // inner loop - column
        while (j < size) {
            printf("#");
            j++; // increment column counter
        }
        
        printf("\n"); 
        i++; // increment row counter
    }
    
    return 0;
}