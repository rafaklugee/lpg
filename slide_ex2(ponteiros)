#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes (float a, float b, float c, float *p1, float *p2);

int main () {
    float a, b, c, x1, x2;
    printf ("Digite o coeficiente A: ");
    scanf ("%f", &a);
    printf ("Digite o coeficiente B: ");
    scanf ("%f", &b);
    printf ("Digite o coeficiente C: ");
    scanf ("%f", &c);

    switch (raizes (a, b, c, &x1, &x2)) {
        case -1:
            printf ("Nao eh equacao de 2o grau!\n");
            break;

        case 0:
            printf ("Nao ha raizes reais!\n");
            break;

        case 1:
            printf ("As raizes sao %.3f e %.3f\n", x1, x2);
    }
    return 0;
}

int raizes (float a, float b, float c, float *p1, float *p2) {
    if (a == 0)
        return -1; // Não é equação de 2o grau.

    float delta = b*b - 4*a*c;
    if (delta < 0)
        return 0; // Não há raízes reais.

    *p1 = (-b + sqrt(delta)) / (2 * a);
    *p1 = (-b + sqrt(delta)) / (2 * a);
    return 1; // Há raízes reais.
}
