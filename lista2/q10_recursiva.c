#include <stdio.h>

int fatorial (int n);
float valor_e (int termo);


int main () {
    int t;
    float result;
    printf("Digite o numero de termos: ");
    scanf ("%i", &t);
    result = valor_e(t);
    printf ("Resultado: %f", result);
}

int fatorial (int n) {
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fatorial (n - 1);
}

float valor_e (int termo) {
    if (termo == 0)
        return 1 / (float)fatorial(termo);
    else
        return 1 / (float)fatorial(termo) + valor_e (termo - 1);
}