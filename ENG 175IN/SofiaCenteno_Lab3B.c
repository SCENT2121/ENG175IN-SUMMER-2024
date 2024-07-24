#include <stdio.h>
#include <math.h>

int main() {
    char choice;
    double Ts, T0, k, Tt;
    int time;

    // Welcome message and user prompt
    printf("Select an object (c for coffee, s for soup, e for engine): ");
    scanf(" %c", &choice);

    // Setting parameters based on user choice
    if (choice == 'c') {
        T0 = 200.0;  
        Ts = 70.0;   
        k = 0.4856;  
    } else if (choice == 's') {
        T0 = 210.0;  
        Ts = 65.0;   
        k = 0.05;    
    } else if (choice == 'e') {
        T0 = 190.0;  
        Ts = 60.0;   
        k = 0.0341;  
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    // Time input from user
    printf("Enter the time in minutes: ");
    scanf("%d", &time);

    // Calculation and output
    printf("Calculating...\n");
    while (time >= 0) {
        Tt = Ts + (T0 - Ts) * exp(-k * time);
        
        // Output based on the chosen object
        if (choice == 'c')
            printf("After %d minutes, the coffee temperature is %.2f°F.\n", time, Tt);
        else if (choice == 's')
            printf("After %d minutes, the soup temperature is %.2f°F.\n", time, Tt);
        else if (choice == 'e')
            printf("After %d minutes, the car engine temperature is %.2f°F.\n", time, Tt);

        // Decrease time by 10 minutes for each iteration
        time -= 10;
    }

    return 0;
}