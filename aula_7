#include <stdio.h>

long long int v[100] = {0}; // Vetor zerado

float potente(float b, int e);
long long int fib(int n);
void hanoi ( int n, char origem, char destino, char aux);

int main()
{
    float base;
    int expoente;

    /*printf("Digite a base e o expoente: "); -- Potenciação
    scanf("%f%i", &base, &expoente);

    float resultado = potente(base, expoente);

    printf("%f\n", resultado);*/
    int k, i;

    /*printf("Quantos termos? "); -- Fibonacci
    scanf("%i", &k);

    int resultado = fib(k);

    for (i = 1; i <= k; i++)
    {
        printf("%i : %lli\n",i, fib(i));
    }*/

    int n;
    printf("Quantos discos? ");
    scanf("%i", &n);
    hanoi (n, 'A', 'B', 'C');

    return 0;
}

float potente(float b, int e)
{
    if (e == 0)
    {
        return 1;
    }
    if (e < 0)
    {
        return potente(1/b, -e);
    }
    return b*potente(b, e-1);
}

/*long long int fib(int n)  -- não otimizado
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}*/

long long int fib (int n)
{
    if (n == 1 || n == 2)
    {
        v[n] = 1;
        return v[n];
    }
    else
    {
        if (v[n] == 0)
        {
            v[n] = fib(n-1) + fib(n-2);
        }
        return v[n];
    }
}

void hanoi ( int n, char origem, char destino, char aux)
{
    if (n == 1)
    {
        printf("Mova disco 1 de %c para %c.\n", origem, destino);
    }
    else
    {
        hanoi (n-1, origem, aux, destino);
        printf("Mova o disco %i de %c para %c.\n", n, origem, destino);
        hanoi (n-1, aux, destino, origem);
    }
}
