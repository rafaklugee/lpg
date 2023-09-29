#include <stdio.h>

void fibonacci(int v[], int n);
int main () {
    int a;
    printf ("Digite o numero de termos de fibonacci: ");
    scanf ("%i", &a);
    int v[a];
    fibonacci (v, a);

}
void fibonacci(int v[] , int n) {
    v[0] = 0;
    v[1] = 1;
    for (int i = 2; i < n; i ++) {
        v[i] = v[i - 2] + v[i - 1];
    }

    for (int i = 0; i < n; i++) {
        printf ("%i\t", v[i]);
    }
}