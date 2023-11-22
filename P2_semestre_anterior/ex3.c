#include <stdio.h>
#include <stdlib.h>
void mostra_vetores (int n_listas, int *p_qtdValores, int **p_listas);
int main () {
    int num = 5, i, j;
    int qtdvalores[5] = {6, 5, 4, 6, 3};
    int *lista[num];
    
    for (i = 0; i < num; i++) {
        lista[i] = malloc (qtdvalores[i] * sizeof(int));
    }
    
    for (i = 0; i < num; i++)
        for (j = 0; j < qtdvalores[i]; j++)
            scanf ("%d", &lista[i][j]);
            
    mostra_vetores (num, qtdvalores, lista);
    
    return 0;
}
void mostra_vetores (int n_listas, int *p_qtdValores, int **p_listas) {
    int i, j;
    for (i = 0; i < n_listas; i++) {             
        for (j = 0; j < p_qtdValores[i]; j++)  
            printf ("%d\t", p_listas[i][j]);

    printf ("\n");
    }
}