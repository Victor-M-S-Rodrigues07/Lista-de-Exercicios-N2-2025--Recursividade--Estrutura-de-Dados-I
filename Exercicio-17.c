// 17) Busca em Array

#include <stdio.h>

int verificarArray (int N, int array[], int indice, int tamanho) {

    if (indice > tamanho) {

        return 0;
    }

    else {

        if (array[indice] == N) {

            return 1;
        }

        else {

            return verificarArray (N, array, indice + 1, tamanho);
        }
    }
}

int main () {

    int N = 10;
    int array[] = {5, 8, 12, 3, 7, 1, 9, 0, 4, 6};
    size_t tamanho = sizeof (array) / sizeof (array[0]);  
    int resultado = verificarArray (N, array, 0, tamanho);

    if (resultado == 0) {

        printf ("O numero %d nao foi encontrado na array", N);
    }

    else {

        printf ("O numero %d foi encontrado na array!", N);
    }
}