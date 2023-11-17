// CODE FOR: Understanding type casting.

#include <stdio.h>

int main()
{
    int a = 4, b = 3;
    float c;

    c = (float)a / b; // Type_casting a from int to float
    printf("%f\n", c);
    return 0;
}