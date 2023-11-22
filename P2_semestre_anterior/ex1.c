#include <stdio.h>
#include <stdlib.h>
void max_matriz (float mat[5][5], float *pMax, int *pI, int *pJ);
int main () {
    int i, j, lin, col;
    float m[5][5], maior;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf ("%f", &m[i][j]);
            
    max_matriz (m, &maior, &lin, &col);
    
    printf ("Maior valor = %f na posicao [%d][%d]", maior, lin, col);
    
    return 0;
    
}
void max_matriz (float mat[5][5], float *pMax, int *pI, int *pJ) {
    int i, j;
    *pMax = mat[0][0];
    *pI = 0;
    *pJ = 0;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (mat[i][j] > *pMax) {
                *pMax = mat[i][j];
                *pI = i;
                *pJ = j;
            }
}