// Determining if a person is an adult

#include <stdio.h>

int main() {
    int age;
    
    // user input age
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // check if age is over 18 using if-else statement
    if (age > 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are not an adult.\n");
    }
    
    return 0;
}