#include <stdio.h>
#include <string.h>

void inverte (char inv[]);
int main () {
    char a[100];
    printf ("Digite uma string:\n");
    scanf ("%s", a);
    inverte(a);
    return 0;
}
void inverte (char inv[]) {
    int tam, i, j = 0;
    tam = strlen(inv);
    char res[100];
    for (i = tam - 1; i >= 0; i--) {
        res[j] = inv[i];
        j++;
    }
    printf ("%s", res);
}
