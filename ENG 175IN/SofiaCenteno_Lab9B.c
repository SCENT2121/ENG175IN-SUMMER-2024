// write a program using struct to store the car brand, the year it was made and the price

#include <stdio.h>
#include <string.h>

// define a structure to store car info
typedef struct {
    char brand[20];
    int year;
    double price;
} Car;

int main() {
    Car dreamCar;

    // assign values for a 1998 Acura NSX
    strcpy(dreamCar.brand, "Acura");
    dreamCar.year = 1998;
    dreamCar.price = 107990.00;

    // output car info
    printf("My Dream Car: NSX\n");
    printf("Brand: %s\n", dreamCar.brand);
    printf("Year: %d\n", dreamCar.year);
    printf("Price: $%.2f\n", dreamCar.price);

    return 0;
}

// pseudocode:
// define a structure to hold car details
// declare a variable of type Car
// assign values for the dream car
// display the car information
