#include <stdio.h>
#include <stdlib.h>
#include "Produto.h"

int main () {
    int n;
    printf ("Quantos produtos ? ");
    scanf ("%d", &n);

    //Produto v[3]
    //struct produto *v = malloc (sizeof(struct produto) * n);
    Produto *v = malloc (sizeof(Produto) * n);
    
    int i;
    for (i = 0; i < n; i++) {
        printf ("Entrada do produto %d\n", i+1);
        //le_produto (v + i); // &v[i]
        v[i] = le_produto_v2();
    }

    int resp;

    do {
    int codigo;
    printf ("Digite um codigo: ");
    scanf ("%d", &codigo);
    int id = busca_produto(v, n, codigo);
    if (id == -1)
        printf ("Produto nao encontrado!\n");
    else {
        printf ("Produto %d:\n", id+1);
        mostra_produto (&v[id]);
    }
    printf ("Deseja continuar (0 para 'sim') ?");
    scanf ("%d", &resp);
    }while (!resp);

    free(v);

    printf ("Lista de Produtos:\n");
    for (i = 0; i < n; i++) {
        printf ("Produto %d:\n", i+1);
        mostra_produto (&v[i]); // *(v + i)
    }

    free(v);

    return 0;
}