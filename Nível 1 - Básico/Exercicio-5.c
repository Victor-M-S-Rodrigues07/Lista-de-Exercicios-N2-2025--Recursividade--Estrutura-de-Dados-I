// 5) Contagem Regressiva

#include <stdio.h> 

int contagem (int n) {

    if (n < 0) {

        return 0;
    }

    else {

        printf ("%d\n", n);
        return contagem (n - 1);
    }
}


int main () {

    int n = 10;

    contagem(n);

    printf ("Lancar!!!");
}