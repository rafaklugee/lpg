#include <stdio.h>

int compara(float a[], float b[], int n);
int main () {
    int x;
    printf ("Digite a capacidade do vetor: ");
    scanf ("%i", &x);
    float v[x];
    float t[x];

    printf ("\nDigite o vetor A:\n");
    for (int i = 0; i < x; i++) {
        scanf ("%i", &v[i]);
    }
    printf ("Digite o vetor B:\n");
    for (int i = 0; i < x; i++) {
        scanf ("%i", &t[i]);
    }

    int result = compara (v, t, x);
    if (result == 1)
        printf ("\n1");
    else
        printf ("\n0");
    
}
int compara(float a[], float b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}