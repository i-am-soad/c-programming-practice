// Practice 02: Stores whole numbers in int variables and prints them with %d in different formats

#include <stdio.h>
int main() {
    int a = 111;
    printf("%d\n", a);

    int b = 222, c = 333;
    printf("%d, %d\n", b, c);

    int d = 444, e = 555;
    printf("The value of d is: %d\t", d);
    printf("The value of e is: %d\n", e);

    int f = 666, g = 777, h = 888;
    printf("f = %d\tg = %d\th = %d\n", f, g, h);

    int i = 999, j = 1111, k = 2222;
    printf("[%5d]", i);
    printf("[%-5d]", j);
    printf("[%09d]", k);

    return 0;
}