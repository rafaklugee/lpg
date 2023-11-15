#include <stdio.h>


// AULA 5 - FUNÇÕES

/*
    Funções:
    - Blocos de código reutilizáveis;
    - Podem receber parâmetros -> entrada;
    - Podem retornar um valor -> saída;
    - Podem ter suas próprias variáveis(locais), facilitando a organização do código;
    - Cada função tem seu escopo -> reutilização de nomes de variáveis é possível;
    - Auxíliia no entedimento de um problema, decomposto em partes menores;
    
    - Sintaxe:
        tipo_retorno nome_da_função (parâmetros/"cópias" das variáveis quando por valor, ou seja, sem ponteiro)
        {
            Declarações de variáveis e comandos...
        }

    

*/

// Exemplo 1:

/*float quadrado( float x )
{
    return x * x;
}

int main()
{
    float a;
    printf("Digite um numero: ");
    scanf("%f", &a);
    float b = quadrado( a ); // chamada da função
    printf("%f ao quadrado = %f\n", a, b);// printf("%f ao quadrado = %f\n", a, quadrado(a)); também funcionará, porém é importante salvar o valor retornado pela função em outra variável
    
    return 0;
}*/
/*
    - A função executa até encontrar o comando return;
*/ 

// Exemplo 2: maior entre dois inteiros

/*int maior (int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int a, b;
    scanf("%i%i", &a, &b);
    printf("Maior valor = %i\n", maior(a, b));
    return 0;
}*/

// Exemplo 3: potenciação

/*float potencia (float base, int expo); // declaração

int main()
{
    float b;
    int e;
    printf("Digite dois numeros: ");
    scanf("%f%i", &b, &e);

    float p = potencia (b, e); // chamada da função

    printf("%f elevado a %i = %f\n", b, e, p);
    return 0;
}

float potencia(float base, int expo)
{
    if (base == 0)
    {
        return 0;
    }

    // inverte-se a base
    if (expo < 0)
    {
        base = 1/base;
        expo = -expo;
    }

    // cálculo da potenciação
    float pot = 1;
    while(expo > 0)
    {
        pot *= base;
        expo--;
    }
    return pot;
}*/

// FUNÇÕES BOOLEANAS

/*
    - Em C, não há tipo bool;
    - Usa-se tipo int, sendo valor 0 interpretado como falso e 1 como verdadeiro.
    
    EXEMPLO NO SLIDE

    int eh_letra(char x)
    {
        return x >= 'a' && x <= 'z'; -> essa expressão já retorna 0 ou 1, pois é uma expressão booleana.
    }
*/

/* Faça um programa que le os tres lados de um triangulo e determina o seu tipo
   Utilize uma função que recebe os três lados e retorna o tipo do triangulo, por exemplo:
   int tipo_triangulo(float x, float y, float z); */

int tipo_triangulo(float x, float y, float z);

int main()
{
    float a, b, c;
    printf("Digite o tamanho dos tres lados: ");
    scanf("%f%f%f", &a, &b, &c);
    if (tipo_triangulo(a, b, c) == 0)
    {
        printf("Nao ha triangulo\n");
    }
    else if (tipo_triangulo(a, b, c) == 1)
    {
        printf("Equilatero");
    }
    else if (tipo_triangulo(a, b, c) == 2)
    {
        printf("Escaleno\n");
    }
    else
    {
        printf("Isosceles\n");
    }
}

int tipo_triangulo(float x, float y, float z)
{
    if (x >= y + z || y >= x + z || z >= x + y)
    {
        return 0;
    }
    else if (x == y && x == z)
    {
        return 1;
    }
    else if (x != y && x != z && y != z)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
