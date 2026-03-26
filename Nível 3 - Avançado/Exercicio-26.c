// 26) Exponenciação Rápida {Com ajuda do Chat GPT devido à DeadLine}

#include <stdio.h>

int exponenciacaoRapida(int x, int n) {
    if (n == 0) {
        return 1;
    }

    int metade = exponenciacaoRapida(x, n / 2);

    if (n % 2 == 0) {
        return metade * metade;
    } else {
        return x * metade * metade;
    }
}

int main() {
    int x = 2;
    int n = 4;

    int resultado = exponenciacaoRapida(x, n);

    printf("%d^%d = %d\n", x, n, resultado);

    return 0;
}