#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * aloca_string( char *mensagem );

int main(int argc, char *argv[])
{
    char **lista = NULL;
    int n = 0;

    char *str = aloca_string( "Digite algo (ou 'sair' para sair): " );

    while ( strcmp( str, "sair" ) != 0 )
    {
        n++;
        lista = realloc( lista, sizeof(char*) * n );
        lista[n-1] = str;
        str = aloca_string( "Digite algo (ou 'sair' para sair): " );
    }

    int i;
    printf("Lista de strings:\n");
    for( i = 0; i < n; i++ )
        printf("%d : %s\n", i, lista[i] );

    // Libera a memória.
    for( i = 0; i < n; i++ )
        free( lista[i] );
    free( lista );

    // Libera a string "sair"
    free( str );

    return 0;
}

char * aloca_string( char *mensagem )
{
    printf("%s", mensagem);
    char buffer[1001];
    scanf(" %[^\n]s", buffer);
    char *p = malloc( strlen( buffer ) + 1 );
    strcpy( p, buffer );
    return p;
}
