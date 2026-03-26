// 3) Sequência de Fibonacci

#include <stdio.h>

int a = 0;
int b = 1;

int fibonacci (int n) {

    if (n == 0) {

        return 0;
    }

    else if (n == 1) {

        return 1;
    }

    else {

        return fibonacci (n - 1) + fibonacci (n - 2);
    }

}

int main () {

    int n = 25;
        
    printf ("Enesimo termo da sequencia de Fibonacci: %d", fibonacci (n));
}