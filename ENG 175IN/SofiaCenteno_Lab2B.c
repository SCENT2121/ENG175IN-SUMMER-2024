#include <stdio.h>
#include <math.h>

int main()
{
    double radius, diameter, area, circumference;
    const double pi = 3.14;
    
    //user input radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    //calculate diameter
    diameter = 2 * radius;
    
    //calculate area
    area = pi * radius * radius;
    
    //calculate circumference
    circumference = 2 * pi * radius;
    
    //print whats above
    printf("Diameter of the circle: %.2f\n", diameter);
    printf("Area of the cirle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);


    return 0;
}
