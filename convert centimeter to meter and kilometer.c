#include <stdio.h>
int main()
{
    float cm;
    float meter = 0;
    float km = 0;

    printf("Enter cm:");
    scanf("%f", &cm);

    meter = cm / 100.0;
    km = cm / 100000.0;

    printf("Meter=%.2f\n", meter);
    printf("KM is =%.2f", km);

    return 0;
}