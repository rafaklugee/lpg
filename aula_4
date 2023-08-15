#include <stdio.h>

// Fibonacci

/*int main()
{
    int i, n;
    printf("Quantos termos voce quer? ");
    scanf("%i", &n);

    printf("1 : 1\n2 : 1\n");

    long long int a = 1, b = 1, atual; // inteiros de 64 bits
    for (i = 3; i <= n; i++)
    {
        atual = a + b;
        printf("%i : %lli\n", i, atual);
        a = b;
        b = atual;
    }
    return 0;
}*/

// Serie de Taylor - V1.0

/*int main()
{
    double x;
    int n, i,j;
    printf ("Digite x e a quantidade de termos n: ");
    scanf ("%lf%d", &x, &n);
    double e_x = 0;
        for (i = 0; i <= n; i++){
            double pot = 1;
            int fat = 1;
                for (j = 1; j <= i; j++){
                    pot *= x; // pot = pot * x
                    fat *= j; // fat = fat * j
                }
            e_x += pot / fat; // e_x = e_x + pot / fat
        }
    printf ("e elevado a %.3f = %.15lf\n", x, e_x);
    return 0;
}*/

// Serie de Taylor V2.0

/*int main()
{
    double x;
    int n, i,j;
    printf ("Digite x e a quantidade de termos n: ");
    scanf ("%lf%d", &x, &n);
    double e_x = 0;
        for (i = 0; i <= n; i++){
            double termo = 1;
                for (j = 1; j <= i; j++){
                    termo *= x/j;
                }
            e_x += termo; // e_x = e_x + termo
        }
    printf ("e elevado a %.3f = %.15lf\n", x, e_x);
    return 0;
}*/

// Serie de Taylor V3.0

int main()
{
    double x, termo = 1;
    int n, i, aux;
    printf ("Digite x e a quantidade de termos n: ");
    scanf ("%lf%d", &x, &n);
    double e_x = 0;
        for (i = 0; i <= n; i++){
            termo = 1;
            termo *= x/i;
            e_x += termo;
        }
    printf ("e elevado a %.3f = %.15lf\n", x, e_x);
    return 0;
}
