/*
Comprehend the formula to calculate the volume of a cone and implement a C program
accordingly.
*/

#include <stdio.h>

int main() {
    float radius, height, volume;
    const float PI = 3.14159;

    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);

    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    volume = (1.0 / 3.0) * PI * radius * radius * height;

    printf("Volume of the cone = %.2f\n", volume);

    return 0;
}
