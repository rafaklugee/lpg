// Lista de exercícios - Geração série
#include <stdio.h>
#include <math.h>

void menu ();
int fatorial (int n);
float serieharmonica (float soma);
float logaritmo (float soma);
float leibniz (float soma);
float nilakantha (float soma);
float valor_e (float soma);
float taylor (float soma);
float seno (float soma);
float cosseno (float soma);

int main () {

    menu();
    int numero;
    scanf ("%i", &numero);
    printf ("\n");

    switch (numero) {
        case 1:
            serieharmonica(0.0);
            break;
        case 2:
            logaritmo(0.0);
            break;
        case 3:
            leibniz (0.0);
            break;
        case 4:
            nilakantha (3.0);
            break;
        case 5:
            valor_e (0.0);
            break;
        case 6:
            taylor (0.0);
            break;
        case 7:
            seno (0.0);
            break;
        case 8:
            cosseno (1.0);
            break;
    }

}

void menu () {
    printf ("Escolha qual serie deseja calcular: \n");
    printf ("\n");
    printf ("(1) Serie Harmonica\n");
    printf ("(2) Serie Logaritmo \n");
    printf ("(3) Serie de Leibniz\n");
    printf ("(4) Serie de Nilakantha\n");
    printf ("(5) Valor de 'e'\n");
    printf ("(6) Serie de Taylor\n");
    printf ("(7) Serie Seno\n");
    printf ("(8) Serie Cosseno\n");
    printf ("Qual sua opcao ? ");
}

//Exercício 1
float serieharmonica (float soma) {
    int termo;
    printf("Digite o numero de termos: ");
    scanf("%i", &termo);
    for (int i = 1; i <= termo; i++)
    {
        soma += 1.0 / i;
        if (i < termo)
        {
            printf("1/%i + ", i);
        }
        else
        {
            printf("1/%i", i);
        }
    }
    printf(" = %f", soma);
    return soma;
}

//Exercício 2
float logaritmo (float soma) {
    int termo;
    int troca = 1;
    printf("Digite o numero de termos: ");
    scanf("%i", &termo);
    
    for (int i = 1; i <= termo; i++){
        if (i < termo){
            if (i % 2 != 0) {
            printf ("1/%i - ", i);
            soma += (float)troca/i;
            }

            if (i % 2 == 0) {
            printf ("1/%i + ", i);
            soma += (float)troca/i;
            }
        }
        if (i == termo) {
            printf ("1/%i", i);
            soma += (float)troca/i;
        }
    troca *= -1;
    }
    printf (" = %f", soma);
    return soma;
}

//Exercício 3
//a)
float leibniz (float soma) {
    int termo;
    int troca = 1;
    printf("Digite o numero de termos: ");
    scanf("%i", &termo);

    for (int i = 1; i <= termo; i += 2){
            soma += (float)troca*4/i;
            troca *= -1;
    }
    printf ("Resultado: %f", soma);
    return soma;
}

//b)
float nilakantha (float soma) {
    int termo;
    int troca = 1;
    printf("Digite o numero de termos: ");
    scanf ("%i", &termo);
    
    for (int i = 2; i < termo; i += 2){
        soma += (float)troca*4/(i*(i+1)*(i+2));
        troca *= -1;
    }
    printf ("Resultado: %f", soma);
    return soma;
}
//Calcular fatorial:
int fatorial (int n) {
    int fatorial;
    if ((n == 0) || (n == 1)){
        fatorial = 1;
    }
    for (fatorial = 1; n > 1; n--){
        fatorial *= n;
    }
    return fatorial;
}

//Exercício 4
float valor_e (float soma) {
    int termo;
    printf("Digite o numero de termos: ");
    scanf ("%i", &termo);
    for (int i = 0; i < termo; i++){
        soma += (float)1/fatorial(i);
    }
    printf ("Resultado: %f", soma);
    return soma;
}

//Exercício 5
float taylor (float soma) {
    int termo;
    int x;
    printf("Digite x e o numero de termos: ");
    scanf ("%i%i", &x, &termo);
    for (int i = 0; i < termo; i++){
        soma += (float)pow(x,i)/fatorial(i);
    }
    printf ("Resultado: %f", soma);
    return soma;
}

//Exercício 6
float seno (float soma) {
    int termo;
    int aux = 1;
    float somaaux = 1;
    float x;
    printf("Digite x e o numero de termos: ");
    scanf ("%f%i", &x, &termo);
    for (int i = 1; i <= termo; i++) { 
        for (int j = 1; j <= aux; j++){
            somaaux *= x/j;
        }
        if (i % 2 == 0) {
            soma -= somaaux;
        }
        else {
            soma += somaaux;
        }
        aux += 2;
        somaaux = 1;
    }
    printf ("Resultado: %f", soma);
}



//Exercício 7
float cosseno (float soma) {
    int termo;
    int aux = 2;
    float somaaux = 1;
    float x;
    printf("Digite x e o numero de termos: ");
    scanf ("%f%i", &x, &termo);
    for (int i = 1; i <= termo; i++) { 
        for (int j = 1; j <= aux; j++){
            somaaux *= x/j;
        }
        if (i % 2 != 0) {
            soma -= somaaux;
        }
        else {
            soma += somaaux;
        }
        aux += 2;
        somaaux = 1;
    }
    printf ("Resultado: %f", soma);
}
