#include <stdio.h>
#include <math.h>
void calcula_circulo (float raio, float *pPerimetro, float *pArea);
int main () {
    float perimetro, area, r;
    printf ("Digite o raio do circulo: ");
    scanf ("%f", &r);
    calcula_circulo (r, &perimetro, &area);
    printf ("\nRaio = %f\n", r);
    printf ("Perimetro = %f\n", perimetro);
    printf ("Area = %f\n", area);

    return 0;
}
void calcula_circulo (float raio, float *pPerimetro, float *pArea) {
    *pPerimetro = 2 * M_PI * raio;
    *pArea = M_PI * pow(raio, 2);
}