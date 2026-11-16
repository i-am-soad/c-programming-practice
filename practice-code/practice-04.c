// Practice 04: Stores single characters in char variables and prints them with %c and %d in different formats

#include <stdio.h>
int main() {
    char a = 'A';
    printf("%c\n", a);

    char b = 'B';
    printf("{%5c}\n", b);
    printf("{%-5c}\n", b);

    char c = 'C';
    printf("%d\t %d\t %d\n", a, b, c);

    char d = '1', e = '2', f = '3';
    printf("%d\t %d\t %d\n", d, e, f);
    return 0;
}