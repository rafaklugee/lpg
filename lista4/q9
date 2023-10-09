#include <stdio.h>
#include <string.h>

void trim(char srt[]);
int main () {
    char a[100];
    printf ("Digite uma string:\n");
    scanf ("%[^\n]s", a);
    trim(a);
    return 0;
}
void trim (char srt[]) {
    int i, j = 0;
    char res[100];
        for (i = 0; srt[i] != '\0'; i++) {
            if ((srt[i] != ' ') || (srt [i] == ' ' && srt[i+1] != ' ' && srt[i-1] != ' ')) {
                res[j] = srt[i];
                j++;
            }
        } 
        res[j] = '\0';
    printf ("%s", res);
}
