#include <stdio.h>

int eh_digito (char x);

int main () {
    char k;
    printf ("Digite alguma coisa: ");
    scanf (" %c", &k);

    if (eh_digito(k)){
        int num = k - 48;
        printf ("Eh digito! E ele eh %i\n", num);
    }
    else {
        printf ("Nao eh digito!\n");
    }
    return 0;
}

int eh_digito (char x) {
    return (x >= '0' && x <= '9');
}