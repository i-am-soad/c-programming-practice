// Practice 07: Subtracts values with the - operator

#include <stdio.h>
int main() {
    int a = 30, b = 20;
    int sub1 = a - b;
    printf("%d\n", sub1);

    int c, d;
    printf("Enter a value for c = ");
    scanf("%d", &c);
    printf("Enter a value for d = ");
    scanf("%d", &d);
    int sub2 = c - d;
    printf("The difference of c and d is = %d\n", sub2);

    float e = 9.89, f = 5.76;
    float sub3 = e - f;
    printf("The difference of e and f is = %f\n", sub3);

    float g, h;
    printf("Please enter a decimal value for g = ");
    scanf("%f", &g);
    printf("Please enter a decimal value for h = ");
    scanf("%f", &h);
    float sub4 = g - h;
    printf("The difference of %f and %f is = %f\n", g, h, sub4);

    double i = 345667565.5678, j = 12345.09876;
    double sub5 = i - j;
    printf("sub5 = %lf\n", sub5);

    double k, l;
    printf("Please enter a large decimal value for k = ");
    scanf("%lf", &k);
    printf("Please enter a large decimal value for l = ");
    scanf("%lf", &l);
    double sub6 = k - l;
    printf("The difference of %lf and %lf is = %lf\n", k, l, sub6);

    char m = 'C';
    char sub7 = m - 1;
    printf("%c", sub7);
    return 0;
}