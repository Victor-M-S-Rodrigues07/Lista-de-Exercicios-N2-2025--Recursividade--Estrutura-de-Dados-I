// 9) Máximo Divisor Comum

#include <stdio.h>

int MDC (int a, int b) {

    if (b == 0) {

        return a;
    }

    else {

        return MDC (b, a % b);
    }
}

int main () {

    int N1 = 48;
    int N2 = 18;
    
    printf ("O MDC de %d e %d = %d", N1, N2, MDC(N1, N2));  
}