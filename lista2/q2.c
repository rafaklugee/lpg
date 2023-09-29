#include <stdio.h>

int maior_valor (int a, int b, int c);

int main () {
    int x, y, z;
    printf ("Digite tres valores: ");
    scanf ("%i %i %i", &x, &y, &z);
    maior_valor (x, y, z);
}

int maior_valor (int a, int b, int c) {
    if ((a > b) && (a > c))
        printf ("%i eh o maior valor", a);
    else if ((b > a) && (b > c))
        printf ("%i eh o maior valor", b);
    else
        printf ("%i eh o maior valor", c);
}