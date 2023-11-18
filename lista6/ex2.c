#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *repetidor (char *s, int n);
int main () {
    int num;
    char s_f[100];
    printf ("Digite uma string: ");
    scanf ("%s", s_f);
    printf ("Digite quantas vezes voce quer repetir essa string: ");
    scanf ("%d", &num);

    char *juntas = repetidor(s_f, num);

    printf ("Resultado: %s", juntas);

    free(juntas);

    return 0;
}
char *repetidor (char *s, int n) {
    int i;
    char *p = malloc (sizeof(char) * n);
    p[0] = '\0';
    for (i = 0; i < n; i++) {
        strcat (p, s);
    }

    return p;
}