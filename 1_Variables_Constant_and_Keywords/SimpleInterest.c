// CODE FOR: Calculating Simple Interest.

#include <stdio.h>

int main()
{
    // input
    int t = 6;
    float P = 745, r = 0.04;

    // calculate A=P(1+rt)
    float A;
    A = P * (1 + (r * t));

    // result
    printf("Simple Interest of 745tk for 4%% rate over 6 years: %.2f\n", A);
    
    return 0;
}