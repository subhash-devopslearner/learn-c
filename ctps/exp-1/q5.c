/*
Write an algorithm and draw a flowchart that reads three sides of a triangle from the user,
checks whether the triangle is valid, and if valid, determines whether it is Equilateral,
Isosceles, or Scalene, and then calculates and displays its area.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;

    /* Read sides */
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    /* Check triangle validity */
    if (a + b > c && a + c > b && b + c > a)
    {
        /* Determine triangle type */
        if (a == b && b == c)
        {
            printf("Triangle is Equilateral\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Triangle is Isosceles\n");
        }
        else
        {
            printf("Triangle is Scalene\n");
        }

        /* Calculate area using Heron's formula */
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Area of the triangle = %.2f\n", area);
    }
    else
    {
        printf("Triangle is not valid\n");
    }

    return 0;
}
