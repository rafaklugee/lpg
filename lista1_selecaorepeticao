// Lista de exercícios - Seleção e Repetição
#include <stdio.h>
#include <math.h>

void menu ();
void coord ();
void triangulo ();
void jogo ();
void valores ();
void ponderadas ();
void imparcons_1 ();
void imparcons_2 ();

int main () {
    menu();
    int numero;
    scanf ("%i", &numero);
    printf ("\n");

    switch (numero) {
        case 1:
            coord();
            break;
        case 2:
            triangulo();
            break;
        case 3:
            jogo();
            break;
        case 4:
            valores();
            break;
        case 5:
            ponderadas();
            break;
        case 6:
            imparcons_1();
            break;
        case 7:
            imparcons_2();
    }
}

void menu () {
    printf ("Escolha uma opcao: \n");
    printf ("\n");
    printf ("(1) Coordenadas de um ponto\n");
    printf ("(2) Tipos de triangulos \n");
    printf ("(3) Tempo de jogo\n");
    printf ("(4) Pares, impares, positivos e negativos\n");
    printf ("(5) Medias ponderadas\n");
    printf ("(6) Soma de impares consecutivos I\n");
    printf ("(7) Soma de impares consecutivos II\n");
    printf ("Qual sua opcao ? ");
}

//Exercício 1
void coord () {
    float x, y;
    printf ("Digite as coordenadas de um ponto (X, Y): ");
    scanf ("%f%f", &x, &y);
    if ((x > 0) && (y > 0))
        printf ("Q1");
    if ((x < 0) && (y > 0))
        printf ("Q2");
    if ((x < 0) && (y < 0))
        printf ("Q3");
    if ((x > 0) && (y < 0))
        printf ("Q4");
    if ((x == 0) && (y == 0))
        printf ("Origem");
    if ((x == 0) && (y != 0))
        printf ("Eixo Y");
    if ((x != 0) && (y == 0))
        printf ("Eixo X");
}

//Exercício 2
void triangulo () {
    float a, b, c;
    printf ("Digite os lados do triangulo (A, B, C): ");
    scanf ("%f%f%f", &a, &b, &c);
    if (b > a) {
        float temp = b;
        b = a;
        a = temp;
    }
    if (c > a) {
        float temp = c;
        c = a;
        a = temp;
    }
    if (c > b) {
        float temp = c;
        c = b;
        b = temp;
    }
    printf ("...Os lados foram ordenados em ordem descrescente...\n");
    if (a >= (b + c)) {
        printf ("NAO FORMA TRIANGULO\n");
        return;
    }
    if (pow(a,2) == (pow(b,2) + pow(c,2)))
        printf ("TRIANGULO RETANGULO\n");
    if (pow(a,2) > (pow(b,2) + pow(c,2)))
        printf ("TRIANGULO OBTUSANGULO\n");
    if (pow(a,2) < (pow(b,2) + pow(c,2)))
        printf ("TRIANGULO ACUTANGULO\n");
    if ((a == b) && (a == c))
        printf ("TRIANGULO EQUILATERO\n");
    if (((a == b) && (a != c)) || ((b == c) && ( b != a)) || ((c == a) && (c != b)))
        printf ("TRIANGULO ISOSCELES\n");
}

//Exercício 3
void jogo () {
    int a, b;
    printf ("Digite a hora inicial e final do tempo jogado: ");
    scanf ("%i%i", &a, &b);
    if (a == b)
        printf ("O JOGO DUROU 24 HORA(S)");
    if (a > b)
        printf ("O JOGO DUROU %i HORA(S)", 24-a+b );
    if (b > a)
        printf ("O JOGO DUROU %i HORA(S)", b - a);
}

//Exercício 4
void valores () {
    int termo, valor, par = 0, impar = 0, pos = 0, neg = 0;
    printf ("Digite o numero de termos para classifica-los: ");
    scanf ("%i", &termo);
    printf ("Digite os termos: ");
    for (int i = 0; i < termo; i++){
        scanf ("%i", &valor);
        if (valor % 2 == 0)
            par++;
        if (valor % 2 != 0)
            impar++;
        if (valor > 0)
            pos++;
        if (valor < 0)
            neg++;
    }
    printf ("%i valor(es) par(es)\n", par);
    printf ("%i valor(es) impar(es)\n", impar);
    printf ("%i valor(es) positivo(s)\n", pos);
    printf ("%i valor(es) negativo(s)\n", neg);
}

//Exercício 5
void ponderadas () {
    int casos;
    float a, b, c, media;
    printf ("Digite o numero de casos teste: ");
    scanf ("%i", &casos);
    for (int i = 0; i < casos; i++){
        printf ("Digite 3 numeros para calcular sua media ponderada: ");
        scanf ("%f%f%f", &a, &b, &c);
        media = (float)(2*a + 3*b + 5*c) / 10;
        printf ("Media: %.2f\n", media);
    }
}

//Exercício 6
void imparcons_1 () {
    int x, y, soma = 0;
    printf ("Digite dois numeros: ");
    scanf ("%i%i", &x, &y);
    if (x > y) {
        for (int i = y + 1; i < x; i++){
            if (i % 2 != 0)
                soma += i;
        }
        printf ("Resultado: %i", soma);
    }
    if (x < y) {
        for (int i = x + 1; i < y; i++){
            if (i % 2 != 0)
            soma += i;
        }
        printf ("Resultado: %i", soma);
    }
    else {
        printf ("Insira valores validos");
    }
}

//Exercício 7
void imparcons_2 () {
    int x, y, casos, soma = 0;
    printf ("Digite o numero de casos teste: ");
    scanf ("%i", &casos);

    for (int k = 1; k <= casos; k++){
        printf ("Digite dois numeros: ");
        scanf ("%i%i", &x, &y);
    if (x > y) {
        for (int i = y + 1; i < x; i++){
            if (i % 2 != 0)
                soma += i;
        }
        printf ("Resultado do caso %i: %i\n", k, soma);
        printf ("\n");
        soma = 0;
    }
    else if (x < y) {
        for (int i = x + 1; i < y; i++){
            if (i % 2 != 0)
            soma += i;
        }
        printf ("Resultado do caso %i: %i\n", k, soma);
        printf ("\n");
        soma = 0;
    }
    else {
        printf ("Insira valores validos\n");
        printf ("\n");
        soma = 0;
    }
    }
}
