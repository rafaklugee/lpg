#include <stdio.h>
void max_vetor (float vet[], int tam, float *pMax, int *pIndice);
int main () {
    int tam, idx;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &tam);
    float v[tam], vmax;
    printf ("Digite os valores desse vetor:\n");
        for (int i = 0; i < tam; i++) {
            scanf ("%f", &v[i]);
        }

    max_vetor (v, tam, &vmax, &idx);

    printf ("\nO maior valor do vetor eh %f e sua posicao eh %d\n", vmax, idx);

    return 0;
}
void max_vetor (float vet[], int tam, float *pMax, int *pIndice) {
    int i;
    *pMax = vet[0];
    *pIndice = 0;
    for (int i = 0; i < tam; i++) {
        if (vet[i] > *pMax) {
            *pMax = vet[i];
            *pIndice = i;
        }
    }
}