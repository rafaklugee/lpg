#include <stdio.h>
#include <stdlib.h>
int main () {
    int num, i, j = 0, k = 0, pos = 0, neg = 0;
    printf ("Quantos valores tera o vetor:");
    scanf ("%d", &num);
    int *v = malloc (sizeof(int) * num);
    printf ("Digite os valores do vetor:\n");
    for (i = 0; i < num; i++) {
        scanf ("%d", v + i);
        if (*(v + i) > 0)
            pos++;
        if (*(v + i) < 0)
            neg++;
    }

    int *p = malloc (sizeof(int) * pos);
    int *n = malloc (sizeof(int) * neg);

    for (i = 0; i < num; i++) {
        if (*(v + i) > 0) {
            p[j] = v[i];
            j++;
        }
        if (*(v + i) < 0) {
            n[k] = v[i];
            k++;
        }
    }

    printf ("\nVetor padrao:\t");
    for (i = 0; i < num; i++) {
        printf ("%d\t", *(v + i));
    }
    printf ("\nVetor positivo:\t");
    for (j = 0; j < pos; j++) {
        printf ("%d\t", *(p + j));
    }
    printf ("\nVetor negativo:\t");
    for (k = 0; k < neg; k++) {
        printf ("%d\t", *(n + k));
    }

    free(v);
    free(p);
    free(n);
    return 0;
}