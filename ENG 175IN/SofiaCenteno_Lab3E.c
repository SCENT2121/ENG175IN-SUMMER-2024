// Simple calculator using switch command

#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;
    int valid_operation = 0; // check if operation is valid
    
    // user input operation choice
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation);
    
    // user input two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    // calculate using switch statement
    switch (operation) {
        case '+':
            result = num1 + num2;
            valid_operation = 1;
            break;
        case '-':
            result = num1 - num2;
            valid_operation = 1;
            break;
        case '*':
            result = num1 * num2;
            valid_operation = 1;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                valid_operation = 1;
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
    }
    
    // check if operation was valid and print result
    if (valid_operation) {
        printf("%.2lf %c %.2lf = %.2lf\n", num1, operation, num2, result);
    } else {
        printf("Invalid operation. Please choose from +, -, *, /\n");
    }
    
    return 0;
}