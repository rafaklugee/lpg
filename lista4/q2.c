#include <stdio.h>
#include <string.h>
int contem (char s[], char c);
int main () {
    char a[50], b;
    printf ("Digite uma string: ");
    scanf ("%s", a);
    printf ("Digite um caractere: ");
    scanf (" %c", &b);
    int result = contem (a, b);
    printf ("O caractere ocorre %i vez(es) na string!", result);
        
}
int contem (char s[], char c) {
    int tam = strlen(s);
    int soma;
    for (int i = 0; i < tam; i++) {
        if (s[i] == c)
            soma += 1;
    }
    return soma;
}