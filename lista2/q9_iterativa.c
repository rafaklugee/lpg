#include <stdio.h>

float serie_harmonica (int termo);

int main () {
    int n;
    float result;
    printf("Digite o numero de termos: ");
    scanf("%i", &n);
    result = serie_harmonica(n);
    printf ("A soma eh: %f", result);
}

float serie_harmonica (int termo) {
    float soma;
    for (int i = 1; i <= termo; i++)
        soma += 1.0 / i;

    return soma;
}