// 13) Verificação de Número Primo

#include <stdio.h>

int verificarPrimo (int N, int divisor) {

    if (N <= 1) {

        return 0;
    }

    else if (N == 2) {

        return 1;
    }

    else {

        if (N % divisor == 0) {

            return 0;
        }

        else {

            if (divisor * divisor > N) {

                return 1;
            }

            else {

                return verificarPrimo (N, divisor + 1);
            }
        }
    }
}

int main () {

    int N = 64;

    int resultado = verificarPrimo (N, 2);

    if (resultado == 0) {

        printf ("O numero nao e primo");
    }

    else {

        printf ("O numero e primo!");
    }
}