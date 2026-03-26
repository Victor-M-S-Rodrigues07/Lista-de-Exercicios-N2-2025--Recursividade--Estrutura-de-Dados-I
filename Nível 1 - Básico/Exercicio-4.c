// 4) Potência

#include <stdio.h>

int potencia (int x, int n) {

    if (n == 0) {

        return 1;
    }

    int temp = potencia (x, n / 2);

    if (n % 2 == 0) {

        return temp * temp;
    }

    else {

        return temp * temp * x;
    }
}

int main () {

    int x = 2;
    int n = 4;

    printf ("%d elevado a %d potencia: %d", x, n, potencia (x, n));
}