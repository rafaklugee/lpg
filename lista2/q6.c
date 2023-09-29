#include <stdio.h>

int fibo (int n);

int main () {
    int qtd;
    printf ("Digite a quantidade de termos de fibonacci: ");
    scanf ("%i", &qtd);
    fibo (qtd);
}

int fibo (int n) {
    int t1 = 0, t2 = 1, prox;
    for (int i = 0; i < n; i++) {
        printf ("%i\t", t1);
        prox = t1 + t2; 
        t1 = t2; 
        t2 = prox;
    }
}