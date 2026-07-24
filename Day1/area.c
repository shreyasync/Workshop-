#include<stdio.h>
int main ()
{
    int choice;
    float side, length, breadth, area, radius;
    
    printf("Enter the shape:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    
    printf("Enter your choice:");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
        printf("Enter side:");
        scanf("%f", &side);
        area = side * side;
        printf("Area of square = %.2f\n", area);
        break;
        
        case 2:
        printf("Enter length and breadth:");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
        printf("Area of rectangle = %.2f\n", area);
        break;
        
        case 3:
        printf("Enter the radius:");
        scanf("%f", &radius);
        area = 3.14159f * radius * radius;
        printf("Area of circle = %.2f", area);
        break;
        
        default:
        printf("Invalid Choice\n");
    }
    
    return 0;
}
