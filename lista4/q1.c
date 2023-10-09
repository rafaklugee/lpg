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
        if (result == 1)
            printf ("Contem!\n");
        else
            printf ("Nao contem!\n");
}
int contem (char s[], char c) {
    int tam = strlen(s);
    for (int i = 0; i < tam; i++) {
        if (s[i] == c)
            return 1;
    }
    return 0;
}