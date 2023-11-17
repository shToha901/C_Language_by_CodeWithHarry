// CODE FOR: Calculating volume of a cylinder.

#include <stdio.h>

int main()
{
    // taking input
    float radius, hight;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter hight: ");
    scanf("%f", &hight);

    // calculating
    float volume, pi = 3.1416;
    volume = pi * radius * radius * hight;

    // showing result
    printf("Volume of the cylinder is: %.2f\n", volume);

    return 0;
}