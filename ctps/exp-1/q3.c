/*
Write an algorithm and draw a flow chart to read a student's percentage marks, classify it
into different grades, and display the grade. If the percentage marks secured are greater than
or equal to 90, the student is awarded grade A; but if they are greater than or equal to 80 but
less than 90, Grade B is awarded; if they are greater than or equal to 65 but less than 80,
Grade C is awarded; otherwise, Grade D is awarded. 
*/

#include <stdio.h>

int main()
{
    float p;

    printf("Enter percentage marks: ");
    scanf("%f", &p);

    if (p >= 90)
        printf("Grade A");
    else if (p >= 80)
        printf("Grade B");
    else if (p >= 65)
        printf("Grade C");
    else
        printf("Grade D");

    return 0;
}
