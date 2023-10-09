#include <stdio.h>
#include <string.h>
void concatena( char str1[], char str2[] );
int main () {
    char str1[50], str2[50];
    printf ("Digite a string 1: ");
    scanf ("%s", str1);
    printf ("Digite a string 2: ");
    scanf ("%s", str2);
    concatena (str1, str2);
}
void concatena(char str1[], char str2[]) {
    int tam1 = strlen (str1);
    str1[tam1] = ' ';
    tam1 += 1;
    for (int i = 0; i <= tam1; i++) {
        str1[tam1 + i] = str2[i]; // str1[6 + 0] = str2[2]
    }
    printf ("%s", str1);
}