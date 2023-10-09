#include <stdio.h>
#include <string.h>
int main () {
    char a[10];
    printf ("Digite uma string: ");
    scanf ("%s", a);
    int tam = strlen(a);
    for (int i = 0; i < tam; i++) {
        if (a[i] == a[tam - 1]) {
            tam--;
            continue;
        }
        else
            printf ("Nao eh palindrome!");
            return 0;
    }
    printf ("Eh palindrome!");
}