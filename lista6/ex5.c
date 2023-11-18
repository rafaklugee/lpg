#include <stdio.h>
#include <stdlib.h>
int *uniao (int *v1, int n1, int *v2, int n2, int *p3);
int main () {
    int m_n1, m_n2, m_p3, i;
    printf ("Digite a capacidade do vetor 1: ");
    scanf ("%d", &m_n1);
    printf ("Digite a capacidade do vetor 2: ");
    scanf ("%d", &m_n2);
    int *m_v1 = malloc (sizeof(int) * m_n1);
    int *m_v2 = malloc (sizeof(int) * m_n2);
    printf ("Digite os valores de v1:\n");
    for (i = 0; i < m_n1; i++)
        scanf ("%d", &m_v1[i]);
    printf ("Digite os valores de v2:\n");
    for (i = 0; i < m_n2; i++)
        scanf ("%d", &m_v2[i]);

    int *resultado = uniao (m_v1, m_n1, m_v2, m_n2, &m_p3);

    printf ("Unidos:\t");
    for (i = 0; i < m_p3; i++) {
        printf ("%d\t", resultado[i]);
    }

    free(m_v1);
    free(m_v2);
    free(resultado);
    return 0;
}
int *uniao (int *v1, int n1, int *v2, int n2, int *p3) {
    int i, j, k = 0, *p;
    *p3 = 0;
    p = malloc (sizeof(int) * (n1 + n2));
    for (i = 0; i < n1; i++) {
        p[i] = v1[i];
        (*p3)++;
    }
    for (j = i; j < (n1 + n2); j++) {
        p[j] = v2[k];
        (*p3)++;
        k++;
    }
    return p;
}
//Ainda é possível fazer uma busca sequencial para remover os valores repetidos do vetor, mas não foi solicitado na questão.