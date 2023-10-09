#include <stdio.h>
#include <string.h>
int digito (char dig[]);
int main () {
    char a[100];
    printf ("Digite uma string: ");
    scanf ("%s", a);
    if (!digito(a))
        return 0;

    int aux, soma = 0, pot = 1, tam = strlen(a);
    for (int i = tam - 1; i >= 0; i--) {
        aux = a[i] - '0';
        soma += aux * pot;
        pot *= 10;
    }
    printf ("Valor convertido: %i", soma);
}
int digito (char dig[]) {
    for (int i = 0; dig[i] != '\0'; i++) {
        if ((dig[i] >= '0') && (dig[i] <= '9'))
            continue;
        else {
            printf ("Nao contem apenas digitos!");
            return 0;
        }
    }
    return 1;
}