#include <stdio.h>

int soma_s (int n);

int main () {
    int n, result;
    printf ("Digite um numero inteiro: ");
    scanf ("%i", &n);
    result = soma_s(n);
    printf ("A soma eh: %i", result);
}

int soma_s (int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}