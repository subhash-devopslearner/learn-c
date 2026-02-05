/*
Given two points A(x₁, y₁) and B(x₂, y₂), comprehend the distance formula and write a
C program to compute the distance between A and B. 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;
    float distance;

    printf("Enter coordinates of point A (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of point B (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt((x2 - x1) * (x2 - x1) +
                    (y2 - y1) * (y2 - y1));

    printf("Distance between points A and B = %.2f\n", distance);

    return 0;
}
