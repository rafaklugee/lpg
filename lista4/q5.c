#include <stdio.h>
#include <string.h>
int main () {
    char a[100];
    printf ("Digite uma string: ");
    scanf ("%s", a);
    int tam = strlen(a);
    for (int i = 0; i < tam; i++) {
        if (a[i] > 96)
            a[i] -= 32;
    }
    printf ("String modificada: %s", a);
}