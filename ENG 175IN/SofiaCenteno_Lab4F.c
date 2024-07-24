#include <stdio.h>

int main() {
    int num_terms, sum = 0, term = 9;
    
    // user input
    printf("Enter the number of terms in the series: ");
    scanf("%d", &num_terms);
    
    // check if num_terms is 0
    if (num_terms == 0) {
        printf("No output\n");
        return 0;
    }
    
    // print series
    printf(" ");
    for (int i = 0; i < num_terms; i++) {
        printf("%d", term);
        sum += term;
        
        if (i < num_terms - 1) {
            printf(" + ");
        }
        
        term = term * 10 + 9;
    }
    
    // print sum of series
    printf("\nSum of the series = %d\n", sum);
    
    return 0;
}
    