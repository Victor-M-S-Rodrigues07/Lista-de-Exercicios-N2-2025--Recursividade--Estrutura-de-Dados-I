// 24) Quick Sort {Com ajuda do Chat GPT}

#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int array[], int inicio, int fim) {

    int pivo = array[fim];  
    int i = inicio - 1; 

    for (int j = inicio; j < fim; j++) {
        if (array[j] <= pivo) {
            i++;
            trocar(&array[i], &array[j]);
        }
    }

    trocar(&array[i + 1], &array[fim]);
    return i + 1;
}

void quickSort(int array[], int inicio, int fim) {
    if (inicio < fim) {
        int pi = particionar(array, inicio, fim);

        quickSort(array, inicio, pi - 1);
        quickSort(array, pi + 1, fim);
    }
}

void imprimirArray(int array[], int tamanho) {
    printf("{");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", array[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

int main() {
    int array[] = {9, 2, 5, 1, 7};
    int tamanho = sizeof(array) / sizeof(array[0]);

    printf("Array original: ");
    imprimirArray(array, tamanho);

    quickSort(array, 0, tamanho - 1);

    printf("Array ordenado: ");
    imprimirArray(array, tamanho);
}