// 22) Subconjuntos de um Array {Com ajuda do Chat GPT}

#include <stdio.h>

void subconjuntosArray (int array[], int tamanho, int arrayAuxiliar[], int indice, int posicao) {

    if (indice == tamanho) {

        printf ("{");

        for (int i = 0; i < posicao; i++) {

            printf ("%d", arrayAuxiliar[i]);

            if (i < posicao - 1) {

                printf (", ");
            }
        }

        printf ("}\n");
        return;
    }

    arrayAuxiliar[posicao] = array[indice];

    subconjuntosArray (array, tamanho, arrayAuxiliar, indice + 1, posicao + 1);

    subconjuntosArray (array, tamanho, arrayAuxiliar, indice + 1,  posicao);
}

int main () {

    int array[] = {1, 2, 3, 4, 5};

    int tamanho = sizeof (array) / sizeof (array[0]);
    int arrayAuxiliar[tamanho];

    printf ("Subconjuntos do array:\n");

    subconjuntosArray (array, tamanho, arrayAuxiliar, 0, 0);
}