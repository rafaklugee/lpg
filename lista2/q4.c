#include <stdio.h>

int func_impar (int a, int b);

int main () {
    int x, y;
    printf ("Digite dois numeros: \n");
    scanf ("%i %i", &x, &y);
    int result = func_impar (x, y);
    printf ("A soma eh: %i", result);

    return 0;
}

int func_impar (int a, int b) {
    int soma = 0;
    if (a > b) {
        for (int i = a - 1; i > b; i--){
            if (i % 2 != 0)
                soma += i;
        }
    }
    if (a < b) {
        for (int i = a + 1; i < b; i++){
            if (i % 2 != 0)
                soma += i;
        }
    }
    return soma;
}