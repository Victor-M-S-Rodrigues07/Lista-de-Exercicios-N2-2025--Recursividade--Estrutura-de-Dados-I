// 10) Multiplicação Recursiva

#include <stdio.h>

int multiplicacao (int a, int b) {

    if (b <= 0) {

        return 0;
    }

    else {

        return a + multiplicacao (a, b - 1);
    }
}

int main () {

    int a = 5;
    int b = 3;

    printf ("%d x %d = %d\n", a, b, multiplicacao (a, b));
}