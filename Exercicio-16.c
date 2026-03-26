// 16) Impressão de Números Ímpares

#include <stdio.h>

void imprimirImpares (int N, int contador) {

    if (contador > N) {

        return;
    }

    else {

        printf ("%d\n", contador);
        return imprimirImpares (N, contador + 2);
    }
}

int main () {

    int N = 17;

    imprimirImpares (N, 1);
}
