#include <stdio.h>

int fatorial (int n);
float valor_e (int termo);


int main () {
    int t;
    float result;
    printf("Digite o numero de termos: ");
    scanf ("%i", &t);
    result = valor_e(t);
    printf ("Resultado: %f", result);
}

int fatorial (int n) {
    int fatorial;
    if ((n == 0) || (n == 1)){
        fatorial = 1;
    }
    for (fatorial = 1; n > 1; n--){
        fatorial *= n;
    }
    return fatorial;
}

float valor_e (int termo) {
    float soma;
    for (int i = 0; i <= termo; i++){
        soma += (float)1/fatorial(i);
    }
    return soma;
}