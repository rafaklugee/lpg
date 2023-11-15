#include <stdio.h>
void max_min (float vet[], int tam, float *pMin, float *pMax);
int main () {
    int tam;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &tam);
    float v[tam], vmax, vmin;
    printf ("Digite os valores desse vetor:\n");
        for (int i = 0; i < tam; i++) {
            scanf ("%f", &v[i]);
        }

    max_min (v, tam, &vmin, &vmax);

    printf ("\nO maior valor do vetor eh %f\n", vmax);
    printf ("O menor valor do vetor eh: %f", vmin);

    return 0;
}
void max_min (float vet[], int tam, float *pMin, float *pMax) {
    int i;
    *pMin = *pMax = vet[0];
    for (int i = 0; i < tam; i++) {
        if (vet[i] > *pMax)
            *pMax = vet[i];
        if (vet[i] < *pMin)
            *pMin = vet[i];
    }
}