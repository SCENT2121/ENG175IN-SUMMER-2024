#include <stdio.h>
int main()
{
    int length;
    int width;
    int area;
    
    printf("Enter length: ");
    scanf("%d", &length);
    
    printf("Enter width: ");
    scanf("%d", &width);
    
    area= length*width;
    
    printf("area = %d \n", area);
    
    return 0;
}