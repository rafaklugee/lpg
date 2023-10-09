#include <stdio.h>
#include <string.h>

int compara(char str1[], char str2[]);
int main () {
    char a[100], b[100];
    printf ("Digite a primeira string: ");
    scanf ("%s", a);
    printf ("Digite a segunda string: ");
    scanf ("%s", b);
    if (compara (a, b))
        printf ("Sao iguais!");
    else
        printf ("Nao sao iguais!");
    return 0;
}
int compara(char str1[], char str2[]) {
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}
