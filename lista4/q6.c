#include <stdio.h>
#include <string.h>
int main () {
    char a[100];
    printf ("Digite uma string: ");
    scanf ("%s", a);
    for (int i = 0; a[i] != '\0'; i++) {
        if ((a[i] >= '0') && (a[i] <= '9'))
            continue;
        else {
            printf ("Nao contem somente digitos!");
            return 0;
        }
    }
    printf ("Contem somente digitos!");
}