// 21) Combinações de um Array

// #include <stdio.h>
// #include <string.h>

// void combinacoesArray (int arrayOriginal[], int tamanho, int K, int indice, int arrayAuxiliar[], int posicao) {

//     if (K <= 0) {

//         printf ("{");

//         for (int j = 0; j <= posicao - 1; j++) {

//             printf ("%d", arrayAuxiliar[j]);

//             if (j < posicao - 1) {

//                 printf (", ");
//             }
//         }

//         printf ("}\n");
//         return;
//     }


//     for (int i = indice; i < tamanho; i++) {

//         arrayAuxiliar[posicao] = arrayOriginal[i];
//         combinacoesArray (arrayOriginal, tamanho, K - 1, i + 1, arrayAuxiliar, posicao + 1);
//     }
// }

// int main () {

//     int array[] = {1, 2, 3, 4, 5, 6};
//     int tamanho = sizeof (array) / sizeof (array[0]);
//     int K = 2;
//     int arrayAuxiliar[K];

//     combinacoesArray (array, tamanho, K, 0, arrayAuxiliar, 0);
// }

// 22) Subconjuntos de um Array

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