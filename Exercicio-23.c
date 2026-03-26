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