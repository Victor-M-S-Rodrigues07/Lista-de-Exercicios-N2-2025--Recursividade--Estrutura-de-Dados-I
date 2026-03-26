// 2) Soma de Números Naturais

#include <stdio.h>

int soma (int n) {

    if (n <= 0) {

        return 0;
    }

    else {

        return n + soma (n - 1);
    }
}

int main () {

    int n = 7;

    printf ("Soma dos primeiros %d numeros: %d\n", n, soma (n));

}