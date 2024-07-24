// print a menu for users to select an option w/ multiple UDFs

#include <stdio.h>
#include <math.h>

// function to calculate surface area of a cuboid
double calculateCuboidSurfaceArea(double length, double width, double height) {
    return 2 * (length * width + length * height + width * height);
}

// function to calculate surface area of a cylinder
double calculateCylinderSurfaceArea(double radius, double height) {
    return 2 * M_PI * radius * (radius + height);
}

// function to calculate surface area of a hemisphere
double calculateHemisphereSurfaceArea(double radius) {
    return 2 * M_PI * pow(radius, 2);
}

// function to calculate volume of a hemisphere
double calculateHemisphereVolume(double radius) {
    return (2.0 / 3.0) * M_PI * pow(radius, 3);
}

int main() {
    int choice;
    double length, width, height, radius;
    
    do {
        // Display menu options
        printf("\nMenu:\n");
        printf("1. Calculate Cuboid\n");
        printf("2. Calculate Cylinder\n");
        printf("3. Calculate Hemisphere\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                // cuboid calculations
                printf("Enter length, width, and height of the cuboid: ");
                scanf("%lf, %lf, %lf", &length, &width, &height);
                
                // calculate and print surface area of cuboid
                printf("Surface Area of cuboid: %.2lf square units\n", calculateCuboidSurfaceArea(length, width, height));
                break;
                
            case 2:
                // cylinder calculations
                printf("Enter radius and height of the cylinder: ");
                scanf("%lf, %lf", &radius, &height);
                
                // calculate and print surface area of cylinder
                printf("Surface Area of cylinder: %.2lf square units\n", calculateCylinderSurfaceArea(radius, height));
                break;
                
            case 3:
                // hemisphere calculations
                printf("Enter radius of the hemisphere: ");
                scanf("%lf", &radius);
                
                // calculate and print surface area and volume of hemisphere
                printf("Surface Area of hemisphere: %.2lf square units\n", calculateHemisphereSurfaceArea(radius));
                printf("Volume of hemisphere: %.2lf cubic units\n", calculateHemisphereVolume(radius));
                break;
                
        }
        
    } while (choice != 3);
    
    return 0;
}
