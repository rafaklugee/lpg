#include <stdio.h>
#include <string.h>

void remover(char s[], char c);
int main () {
    char a[100], r;
    printf ("Digite uma string: ");
    scanf ("%s", a);
    printf ("Digite um caractere para ser removido: ");
    scanf (" %c", &r);
    remover(a, r);
    return 0;
}
void remover(char s[], char c) {
    int i, j = 0;
    char res[100];
        for (i = 0; s[i] != '\0'; i++) {
            if (s[i] != c) {
                res[j] = s[i];
                j++;
            }
        res[j] = '\0';
        }
    printf ("%s", res);
}
