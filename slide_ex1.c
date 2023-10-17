#include <stdio.h>
#include <stdlib.h>
void converte (int x, int *pH, int *pM, int *pS);
int main () {
    int t, h, m, s;
    printf ("Digite um tempo em segundos: ");
    scanf ("%d", &t);
    converte (t, &h, &m, &s);
    printf ("%dh %dmin %ds\n", h, m, s);
    return 0;
}
void converte (int x, int *pH, int *pM, int *pS) {
    *pH = x / 3600;
    int resto = x % 3600;
    *pM = resto / 60;
    *pS = resto % 60;
}