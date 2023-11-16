typedef struct {
	int codigo;
	char descricao[20];
	float preco;
} Produto;

void mostra_produto( Produto *x );
void le_produto( Produto *x );
Produto le_produto_v2();