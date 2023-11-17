// CODE FOR: Convertion between Celcious, Ferenhiet and Kelvin.

#include <stdio.h>

int main()
{
    // Taking celcious input
    float C;
    printf("Enter temperature in celcious: ");
    scanf("%f", &C);

    // Converting C to F and K
    float F, K;
    F = (1.8 * C) + 32;
    K = C + 273;

    // Showing Result
    printf("Temperature in Ferenhiet: %.1f\n", F);
    printf("Temperature in Kelvin: %.1f\n", K);

    return 0;
}