// 15) Impressão de Números Pares

#include <stdio.h>

void imprimirPares (int N, int contador) {

    if (contador > N) {

        return;
    }

    else {

        if (contador % 2 == 0) {

            printf ("%d\n", contador);
            return imprimirPares (N, contador + 1);
        }

        else {

            return imprimirPares (N, contador + 1);
        }
    }
}

int main () {

    int N = 20;

    imprimirPares (N, 0);
}