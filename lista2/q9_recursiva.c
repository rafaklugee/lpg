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
    if (termo == 1) 
        return 1.0;
    else
        return 1.0 / termo + serie_harmonica(termo - 1);
}