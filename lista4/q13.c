#include <stdio.h>
#include <string.h>

void substring (char str[], int ini, int n, char sub[]);
int main () {
    char str[100], sub[100];
    int ini, n;
    printf ("Digite uma string: ");
    scanf ("%[^\n]s", str);
    printf ("Digite o indice inicial: ");
    scanf ("%i", &ini);
    printf ("Digite a quantidade de caracteres para ler: ");
    scanf ("%i", &n);
    substring (str, ini, n, sub);
    
}
void substring (char str[], int ini, int n, char sub[]) {
    int i, j, contador;
    for (i = ini; contador <= n; i++) {
        sub[j] = str[i];
        j++;
        contador++;
    }
    sub[j] = '\0';
    printf ("%s", sub);
}
