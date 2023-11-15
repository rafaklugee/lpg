#include <stdio.h>
#include <math.h>
void calcula_hora (int totalMinutos, int *ph, int *pm);
int main () {
    int totalmin, hora, min;
    printf ("Digite o valor dos minutos passados ao longo do dia: ");
    scanf ("%d", &totalmin);

    calcula_hora (totalmin, &hora, &min);

    printf ("A hora corrente eh: %dh e %dm", hora, min);

    return 0;
}
void calcula_hora (int totalMinutos, int *ph, int *pm) {
    *ph = totalMinutos / 60;
    *pm = (totalMinutos % 60);
    if (*ph > 24)
        *ph = *ph % 24;
}