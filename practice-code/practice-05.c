// Practice 05: Takes input from the user with scanf using %d, %f, %lf and %c

#include <stdio.h>
int main() {
    int a;
    printf("Please enter a value for a: ");
    scanf("%d", &a);
    printf("a = %d\n", a);

    int x, y;
    printf("Enter a value of x = ");
    scanf("%d", &x);
    printf("Enter a value of y = ");
    scanf("%d", &y);
    printf("The values of x and y you entered are: %d and %d\n", x, y);

    int age;
    printf("How old are you?\tAns: ");
    scanf("%d", &age);
    printf("So you are %d years old. That's great\n", age);

    float b;
    printf("Please enter a decimal value for b: ");
    scanf("%f", &b);
    printf("b = %f\n", b);

    double c;
    printf("Please enter e large decimal number: ");
    scanf("%lf", &c);
    printf("c = %lf\n", c);

    char d;
    printf("Please enter a chracter: ");
    scanf(" %c", &d);
    printf("d = %c\tASCII nuber of d = %d", d, d);
    return 0;
}