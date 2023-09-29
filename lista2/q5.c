#include <stdio.h>

int primo (int k, int n);

int main () {
    int n, k;
    printf ("Digite n numeros primos para aparecer acima do numero k\n");
    printf ("n: ");
    scanf ("%i", &n);
    printf ("k: ");
    scanf ("%i", &k);
    printf ("\n");
    primo (k, n);
}

int primo (int k, int n) {
    int contador = 0;
    int num_divisores = 0;

    for (int i = k + 1; contador < n; i++){
        for (int j = i; j > 0; j--) {
            if (i % j == 0) {
                num_divisores++;
            }
        }
        if (num_divisores == 2) {
            printf ("%i eh primo\n", i);
            contador++;
        }
        num_divisores = 0;
    }
}