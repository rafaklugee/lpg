#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"

#define LIN 2
#define COL 3
#define DIM 6
#define L_A 2
#define C_A 3
#define L_B C_A
#define C_B 4


int main(int argc, char *argv[]) {
	//Multiplicação entre matrizes:
	int a[L_A][C_A], b[L_B][C_B], c[L_A][C_B];
	gera_valores_matriz( L_A, C_A, a );
	gera_valores_matriz( L_B, C_B, b );
	mostra_matriz( L_A, C_A, a );
	mostra_matriz( L_B, C_B, b );
	
	multi_matrizes( L_A, C_A, a, L_B, C_B, b, c );
	mostra_matriz( L_A, C_B, c);
	return 0;
}
	
	
	
	//QUESTAO 3
	/*int a[LIN][COL], b[LIN][COL];
	gera_valores_matriz( LIN, COL, a);
	gera_valores_matriz( LIN, COL, b);
	mostra_matriz( LIN, COL, a);
	mostra_matriz( LIN, COL, b);
	
	int c[LIN][COL];
	soma_matrizes( LIN, COL, a, b, c);
	mostra_matriz( LIN, COL, c);
	
	
	//QUESTAO 2	
	/*int m[LIN][COL], t[COL][LIN];
	gera_valores_matriz( LIN, COL, m);
	mostra_matriz( LIN, COL, m);
	
	gera_transposta( LIN, COL, m, t);
	mostra_matriz( COL, LIN, t);
	
	
	
	//QUESTAO 1
	/*int i;
	for ( int i = 0; i < LIN  ; i++) {
		mostra_vetor_2( m[i], COL, "Vetor: ");
		 
		 
		 //mostra_vetor_2(&m, LIN*COL, "Vetor: ") 
	 
	 */
	 /*float media = media_pares (LIN, COL , m);
	 printf("Media dos pares: %.2f\n", media);
	
	/*int m[DIM][DIM];
	gera_valores_matriz( DIM, DIM, m );
	mostra_matriz( DIM, DIM, m );
	diagonal_principal( DIM, m );
	diagonal_secundaria( DIM, m );
	
	/*
	int mat[LIN][COL];	
	gera_valores_matriz( LIN, COL, mat );
	mostra_matriz( LIN, COL, mat );
	
	int m[10][12];
	gera_valores_matriz( 10, 12, m );
	mostra_matriz( 10, 12, m );
	*/	
	


