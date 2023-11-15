#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int digito (char dig[]);
int converte (char a[]);

int main () {
    char data[11];
    int dia, mes, ano;
    printf ("Digite uma data no formato DD/MM/AAAA: ");
    scanf ("%s", data);

    if ((data[2] != '/') || (data[5] != '/') || (data[10] != '\0')) {
        printf ("Formato incorreto.");
        return 0;
    }

    for (int i = 0; data[i] != '\0'; i++) {
        if (data[i] == '/')
            continue;
        if (digito(&data[i]))
            continue;
        else
            return 0;
    }  

   for (int i = 0; i < 11; i ++) {
        if ((i == 0) || (i == 1))
            dia = converte (data);
        if ((i == 3) || (i == 4))
            mes  = converte(data);
        if ((i == 6) || (i == 7) || (i == 8) || (i == 9))
            ano = converte(data);
   }
   printf ("%i", dia);
   printf ("%i\t", mes);
   printf ("%i\t", ano);
}

int digito (char dig[]) {
    for (int i = 0; dig[i] != '\0'; i++) {
        if ((dig[i] >= '0') && (dig[i] <= '9'))
            return 1;
        else {
            printf ("Nao contem apenas digitos!");
            return 0;
        }
    }
    return 1;
}

int converte (char a[]) {
    if (!digito(a))
        return 0;

    int aux, soma = 0, pot = 1, tam = strlen(a);
    for (int i = tam - 1; i >= 0; i--) {
        aux = a[i] - '0';
        soma += aux * pot;
        pot *= 10;
    }
    return soma;
}
