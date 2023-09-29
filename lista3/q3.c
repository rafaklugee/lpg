#include <stdio.h>
#include <math.h>

int eh_primo(int x);
int soma_primos(int v[], int n);
int main () {
    int a;
    printf ("Digite a capacidade do vetor: ");
    scanf ("%i", &a);
    int v[a];
    printf ("\nDigite os numeros do seu vetor:\n");
    for (int i = 0; i < a; i++) {
        scanf ("%i", &v[i]);
    }

    int result = soma_primos(v, a);
    printf ("A soma eh: %i", result);


}
int soma_primos(int v[], int n) {
    
    
    int soma = 0;
    for (int i = 0; i < n; i++) {
        if (eh_primo(v[i]))
            soma += v[i];
    }
    return soma;
}
int eh_primo( int x ){
	if( x == 1 )
		return 0;

	int i; 
	int r = sqrt( x );
	for( i = 2 ; i <= r ; i++ ){
		if( x % i == 0 )
			return 0; //  Falso, não é primo!
	}
	return 1; // Verdadeiro, é primo!
}