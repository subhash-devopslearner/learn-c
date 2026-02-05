/*
Implement a menu-driven program(using switch-case) to calculate the area of a
triangle, rectangle, circle, and sphere.
*/

#include <stdio.h>

#define PI 3.14159

int main()
{
    int choice;
    float base, height, length, breadth, radius, area;

    printf("---- AREA CALCULATION MENU ----\n");
    printf("1. Area of Triangle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Circle\n");
    printf("4. Area of Sphere\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter base and height of triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        case 2:
            printf("Enter length and breadth of rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 4:
            printf("Enter radius of sphere: ");
            scanf("%f", &radius);
            area = 4 * PI * radius * radius;
            printf("Surface Area of Sphere = %.2f\n", area);
            break;

        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}
