#include <stdio.h>
#include <math.h>

// Area of kite formula
double kite_area(double x, double y, double z) {
    return x * (sqrt(y * y - x * x) + sqrt(z * z - x * x));
}

int main() {
    double x, y, z;
    double perimeter, area;
    
    //user enter x, y, & z values
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    printf("Enter the value of y: ");
    scanf("%lf", &y);
    
    printf("Enter the value of z: ");
    scanf("%lf", &z);
    
    //calculate kite perimeter
    perimeter = 2 * (x + y);
    
    //calculate kite area w given formula
    area = kite_area(x, y, z);
    
    //print perimeter and area
    printf("Perimeter: %.2lf\n", perimeter);
    printf("Area: %.2lf\n", area);
    
    return 0;
}
