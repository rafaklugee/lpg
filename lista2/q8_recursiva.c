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
    if (n == 1)
        return 1;
    else
        return n + soma_s(n - 1);
}
