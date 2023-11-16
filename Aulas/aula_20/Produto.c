#include "Produto.h"
#include <stdio.h>

void mostra_produto( Produto *x ){
	printf("Codigo: %d\nDescricao: %s\nPreco: R$%.2f\n",
				x->codigo, x->descricao, x->preco);
	printf("\n");
}

void le_produto( Produto *x ){
	printf("Digite o codigo: ");
	scanf("%d", &(*x).codigo );
	printf("Digite a descricao: ");
	scanf(" %[^\n]", x->descricao );
	printf("Digite o preco: ");
	scanf("%f", &x->preco );
}

Produto le_produto_v2() {
    Produto x;
	printf("Digite o codigo: ");
	scanf("%d", &x.codigo );
	printf("Digite a descricao: ");
	scanf(" %[^\n]", x.descricao );
	printf("Digite o preco: ");
	scanf("%f", &x.preco );   
    return x;
}

int busca_produto ( Produto v[], int n, int cod) {
    int i;
    for (i = 0; i < n; i++) {
        if (v[i].codigo == cod)
            return i; // Encontrado no indice i
    }
    return -1; // Não encontrado
}