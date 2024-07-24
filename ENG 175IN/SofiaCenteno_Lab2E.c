#include <stdio.h>

int main() {
    int num_rolls, i;
    
    //user input number of rolls
    printf("Enter the number of times you want to roll the dice: ");
    scanf("%d", &num_rolls);
    
    // Print header for the table
    printf("\nRoll Number\tDice 1\tDice 2\tSum\n");
    
    // Loop for rolling the dice N times
    for (i = 1; i <= num_rolls; ++i) {
        // Roll the first die 
        int dice1 = (i * 37) % 6 + 1; 
        
        // Roll the second die
        int dice2 = (i * 19) % 6 + 1;
        
        // sum of the two dice
        int sum = dice1 + dice2;
        
        // Print results in table
        printf("%d\t\t%d\t%d\t%d\n", i, dice1, dice2, sum);
    }
     return 0;
}
