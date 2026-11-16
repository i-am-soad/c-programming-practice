// Practice 06: Adds values with the + operator

#include <stdio.h>
int main() {
    int a = 10, b = 20;
    int sum1 = a + b;
    printf("%d\n", sum1);

    int c, d;
    printf("Enter a value for c = ");
    scanf("%d", &c);
    printf("Enter a value for d = ");
    scanf("%d", &d);
    int sum2 = c + d;
    printf("The sum of c and d is = %d\n", sum2);

    float e = 3.89, f = 5.76;
    float sum3 = e + f;
    printf("The sum of e and f is = %f\n", sum3);

    float g, h;
    printf("Please enter a decimal value for g = ");
    scanf("%f", &g);
    printf("Please enter a decimal value for h = ");
    scanf("%f", &h);
    float sum4 = g + h;
    printf("The sum of %f and %f is = %f\n", g, h, sum4);

    double i = 3456.5678, j = 12345.09876;
    double sum5 = i + j;
    printf("sum5 = %lf\n", sum5);

    double k, l;
    printf("Please enter a large decimal value for k = ");
    scanf("%lf", &k);
    printf("Please enter a large decimal value for l = ");
    scanf("%lf", &l);
    double sum6 = k + l;
    printf("The sum of %lf and %lf is = %lf\n", k, l, sum6);

    char m = 'A';
    char sum7 = m + 1;
    printf("%c", sum7);
    return 0;
}