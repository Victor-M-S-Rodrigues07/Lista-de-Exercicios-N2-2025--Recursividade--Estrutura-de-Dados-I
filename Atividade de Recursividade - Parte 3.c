// 21) Combinações de um Array {Com ajuda do Chat GPT}

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

// 22) Subconjuntos de um Array {Com ajuda do Chat GPT}

// #include <stdio.h>

// void subconjuntosArray (int array[], int tamanho, int arrayAuxiliar[], int indice, int posicao) {

//     if (indice == tamanho) {

//         printf ("{");

//         for (int i = 0; i < posicao; i++) {

//             printf ("%d", arrayAuxiliar[i]);

//             if (i < posicao - 1) {

//                 printf (", ");
//             }
//         }

//         printf ("}\n");
//         return;
//     }

//     arrayAuxiliar[posicao] = array[indice];

//     subconjuntosArray (array, tamanho, arrayAuxiliar, indice + 1, posicao + 1);

//     subconjuntosArray (array, tamanho, arrayAuxiliar, indice + 1,  posicao);
// }

// int main () {

//     int array[] = {1, 2, 3, 4, 5};

//     int tamanho = sizeof (array) / sizeof (array[0]);
//     int arrayAuxiliar[tamanho];

//     printf ("Subconjuntos do array:\n");

//     subconjuntosArray (array, tamanho, arrayAuxiliar, 0, 0);
// }

// 23) Merge Sort {Com ajuda do Chat GPT}

#include <stdio.h>

void merge (int array[], int inicio, int meio, int fim) {

    int N1 = meio - inicio + 1; 
    int N2 = fim - meio;

    int esquerda[N1], direita[N2];

    for (int i = 0; i < N1; i++) {
        
        esquerda[i] = array[inicio + i];
    }
        
    for (int j = 0; j < N2; j++) {

        direita[j] = array[meio + 1 + j];
    }   

    int i = 0, j = 0, k = inicio;

    while (i < N1 && j < N2) {

        if (esquerda[i] <= direita[j]) {

            array[k] = esquerda[i];
            i++;
        } 
        
        else {

            array[k] = direita[j];
            j++;
        }

        k++;
    }

    while (i < N1) {

        array[k] = esquerda[i];
        i++;
        k++;
    }

    while (j < N2) {

        array[k] = direita[j];
        j++;
        k++;
    }
}

void mergeSort (int array[], int inicio, int fim) {

    if (inicio < fim) {

        int meio = (inicio + fim) / 2;

        mergeSort (array, inicio, meio);

        mergeSort (array, meio + 1, fim);

        merge (array, inicio, meio, fim);
    }
}

void imprimirArray (int array[], int tamanho) {

    printf ("{");

    for (int i = 0; i < tamanho; i++) {

        printf ("%d", array[i]);

        if (i < tamanho - 1) {

            printf (", ");
        }
    }

    printf ("}\n");
}

int main () {

    int array[] = {5, 3, 8, 1, 6, 7, 10, 2 , 3};
    int tamanho = sizeof (array) / sizeof (array[0]);

    printf ("Array original: ");
    imprimirArray (array, tamanho);

    mergeSort (array, 0, tamanho - 1);

    printf ("Array ordenado: ");
    imprimirArray (array, tamanho);
}