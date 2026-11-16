// Practice 03: Stores decimal numbers in float and double variables and prints them with %f in different formats

#include <stdio.h>
int main() {
    float a = 1.1;
    printf("%f\n", a);

    float b = 2.2378;
    printf("%.3f\n", b);

    float c = 3.54;
    printf("[%8.3f]\n", c);
    printf("[%-8.3f]\n", c);
    printf("[%08.3f]\n", c);

    double d = 1234.567890123;
    printf("%lf", d);
    return 0;
}