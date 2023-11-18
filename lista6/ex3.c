#include <stdio.h>
#include <stdlib.h>
int main () {
    int i, j = 0, val, valm = 0;
    float *p, soma = 0, media;

    printf ("Digite quantos valores tera o vetor: ");
    scanf ("%d", &val);
    
    p = malloc (sizeof(float) * val);

    printf ("Digite os valores do vetor:\n");
    for (i = 0; i < val; i++) {
        scanf ("%f", p + i);  
        soma += *(p + i);           
    }

    media = soma / val;
    printf ("A media eh: %.2f\n", media);

    for (i = 0; i < val; i++) 
        if (p[i] >= media) {
            p[j] = p[i];
            j++;
            valm++;
        }

    p = realloc (p, sizeof(float) * valm);

    printf ("Os valores maiores ou acima da media sao:\n");
    for (j = 0; j < valm; j++) 
        printf ("%.2f\n", p[j]);

    free(p);
    return 0;
}