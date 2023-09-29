#include <stdio.h>

int tipo_triangulo (int a, int b, int c);

int main () {
    int x, y, z;
    printf ("Digite os lados do triangulo: ");
    scanf ("%i %i %i", &x, &y, &z);
    tipo_triangulo (x, y, z);
}

int tipo_triangulo (int a, int b, int c) {
    if ((a + b < c) || (a + c < b) || (b + c < a))
        printf ("Nao eh triangulo");
    else if ((a == b) && (b == c))
        printf ("Equilatero");
    else if ((a != b) && (b != c) && (a != c))
        printf ("Escaleno");
    else 
        printf ("Isosceles");
}