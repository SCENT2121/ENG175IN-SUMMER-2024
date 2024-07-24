// Ask the user for the number of elements to be stored in an array of type double

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// UDFs
void initTemps(double arr[], int size);
void tempStats(double arr[], int size);

// initialize temperature values between 0 to 120 with decimals
void initTemps(double arr[], int size) {
    srand(time(NULL)); 
    int i = 0;
    while (i < size) {
        arr[i] = (rand() % 121) + ((double)(rand() % 10) / 10.0); // random temp with decimals, 121 bc 120.9 is ok
        i++;
    }
}

// calculate and print temperature stats
void tempStats(double arr[], int size) {
    double maxTemp = arr[0], minTemp = arr[0], sum = 0.0;

    // max, min, and sum of temperatures
    for (int i = 0; i < size; ++i) {
        if (arr[i] > maxTemp) {
            maxTemp = arr[i];
        }
        if (arr[i] < minTemp) {
            minTemp = arr[i];
        }
        sum += arr[i];
    }

    // average temperature
    double avgTemp = sum / size;

    // results
    printf("\nThe maximum temperature is %.2lf fahrenheit\n", maxTemp);
    printf("The minimum temperature is %.2lf fahrenheit\n", minTemp);
    printf("The average temperature is %.2lf fahrenheit\n", avgTemp);
}

// main function
int main() {
    int size;
    
    // user input
    printf("Enter the number of temperature measurements: ");
    scanf("%d", &size);
    
    // declare an array 'temperatures' to store temp measurements, size determined by the user input
    double temperatures[size];
    // initialize the 'temperatures' array with random temp values ranging from 0 to 120 degreesnincluding decimals
    initTemps(temperatures, size);

    printf("Temperature values: [");
    for (int i = 0; i < size; ++i) {
        printf("%.2lf", temperatures[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    // calc and print temperature stats
    tempStats(temperatures, size);

    return 0;
}