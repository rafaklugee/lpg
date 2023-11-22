#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *tira_letra (char *s, char c);
int main () {
    int i;
    char pal[50];
    char carac;
    scanf ("%s", pal);
    scanf (" %c", &carac);
    
    char *resultado = tira_letra (pal, carac);
    
    printf ("%s", resultado);
        
    free (resultado);
    
    return 0;
}
char *tira_letra (char *s, char c) {
    int i, j = 0, tam = strlen(s), tamnova = 0;
    for (i = 0; i < tam; i++) {
        if (s[i] != c) {
            tamnova++;
        }
    }
    
    char *ns = malloc (sizeof(char) * tamnova + 1);
    for (i = 0; i < tam; i++) {
        if (s[i] != c) {
            ns[j] = s[i];
            j++;
        }
    }
    ns[tamnova] = '\0';
    return ns;
}