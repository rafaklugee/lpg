#include <stdio.h>
#include <stdlib.h>
float *clone (float *v, int n);
int main () {
    int i, n;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &n);
    float f[n];
    printf ("Digite os valores do vetor:\n");
        for (i = 0; i < n; i++) {
            printf ("[%d] = ", i);
            scanf("%f", &f[i]);
        }

    float *resultado = clone (f, n);
    
    for (i = 0; i < n; i++) 
        printf ("[%.2f] no endereco: %p\n", resultado[i], &resultado + i);

    free(resultado);

    return 0;
}
float *clone (float *v, int n) {
    int i;
    float *v_clone;
    v_clone = malloc (sizeof(float) * n);
    for (i = 0; i < n; i++) {
        v_clone[i] = v[i];
    }
    return v_clone;
}
