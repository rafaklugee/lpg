#include <stdio.h>

int busca_seq_rec(int v[], int n, int chave);
int main () {
    int tam, key;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%i", &tam);
    int vet[tam];
    printf ("Preencha o vetor:\n");
        for (int i = 0; i < tam; i++) {
            scanf ("%i", &vet[i]);
        }
    printf ("Digite o valor a ser buscado: ");
    scanf ("%i", &key);
    
    int result = busca_seq_rec(vet, tam, key);
    if (result != -1)
        printf ("\nEncontrado na posicao: %i", result);
    else
        printf ("Nao encontrado");
}
int busca_seq_rec(int v[], int n, int chave) {
    if (n < 0)
        return -1;
    if (v[n] == chave)
        return n;
    else
        return busca_seq_rec(v, n - 1, chave);
}