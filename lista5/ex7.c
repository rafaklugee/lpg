#include <stdio.h>
void min_matriz (float mat[3][4], float *pMin, int *pI, int *pJ);
int main () {
    int i, j, lin, col;
    float m[3][4], vmin;
    printf ("Digite os valores da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf ("[%d][%d] = ", i, j);
            scanf ("%f", &m[i][j]);
        }
    }

    min_matriz (m, &vmin, &lin, &col);

    printf ("\nO menor elementro da matriz eh %f e suas cordenadas sao [%d][%d]", vmin, lin, col);

    return 0;
}
void min_matriz (float mat[3][4], float *pMin, int *pI, int *pJ) {
    int i, j;
    *pMin = mat[0][0];
    *pI = *pJ = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (mat[i][j] < *pMin) {
                *pMin = mat[i][j];
                *pI = i;
                *pJ = j;
            }
        }
    }
}