// 6) Soma de Dígitos

#include <stdio.h>

int soma = 0;

int somaDigitos (int n, int soma) {

    if (n <= 0) {

        return soma;
    }

    else {

        return soma + somaDigitos (n / 10, n % 10);
    }
}

int main () {

    int n = 9876;

    printf ("Soma dos termos: %d\n", somaDigitos (n, 0));
}