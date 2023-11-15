#include <stdio.h>
int inc_dec (int *a, int *b);
int main () {
    int x, y;
    printf ("Digite um valor para a: ");
    scanf ("%d", &x);
    printf ("Digite um valor para b: ");
    scanf ("%d", &y);
    inc_dec (&x, &y);

    return 0;
}
int inc_dec (int *a, int *b) {
    int v;
    v = *a - *b;
    printf ("%d", v);
}