#include <stdio.h>
void troca_valor (float *x, float *y);
int main () {
    float a, b;
    printf ("Digite dois valores:\n");
    scanf ("%f%f", &a, &b);
    printf ("Valor de A = %f\n", a);
    printf ("Valor de B = %f\n\n", b);

    troca_valor (&a, &b);

    printf ("(t)Valor de A = %f\n", a);
    printf ("(t)Valor de B = %f\n", b);

    return 0;
}
void troca_valor (float *x, float *y) {
    float aux = *y;
    *y = *x;
    *x = aux;
}
