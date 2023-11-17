// CODE FOR: Calculating area of a rectangle.

#include <stdio.h>

int main()
{
    // taking input
    float length, width, area;
    printf("Enter length and width respectively: ");
    scanf("%f %f", &length, &width);

    // calculating
    area = length * width;

    // printing result
    printf("Area of rectangle is: %.2f\n", area);

    return 0;
}