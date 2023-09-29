#include <stdio.h>

int soma_especial (int n, int k, int x);

int main () {
    int a, b, c, result;
    printf ("Digite n termos que serao multiplos de k a partir de x:\n");
    printf ("n: ");
    scanf ("%i", &a);
    printf ("k: ");
    scanf ("%i", &b);
    printf ("x: ");
    scanf ("%i", &c);
    result = soma_especial (a, b, c);
    printf ("A soma especial eh: %i", result);
}

int soma_especial (int n, int k, int x) { // n termos // múltiplos de k // a partir de x
    int contador = 0;
    int soma = 0;
    for (int j = x; contador < n; j++) { // j = 18 ; 0 < 3 ; 18++
        if (j % k == 0) {
            soma += j;
            contador++;
        }
    }
    return soma;
}