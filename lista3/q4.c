#include <stdio.h>

void busca_todos(int v[], int n, int chave, int indices[]);
int main () {
    int cap, key;
    printf ("Digite a capacidade do vetor: ");
    scanf ("%i", &cap);
    int v[cap], idx[cap];
    printf ("Preencha o vetor:\n");
    for (int i = 0; i < cap; i++) {
        scanf ("%i", &v[i]);
    }
    printf ("Digite a chave: ");
    scanf ("%i", &key);

    busca_todos(v, cap, key, idx);
}
void busca_todos(int v[], int n, int chave, int indices[]) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (chave == v[i]) { 
            indices[cont] = i; 
            cont++;
        }
    }
    for (int i = cont; i < n; i++) {
        indices[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        printf ("%i\t", indices[i]);
    }
}