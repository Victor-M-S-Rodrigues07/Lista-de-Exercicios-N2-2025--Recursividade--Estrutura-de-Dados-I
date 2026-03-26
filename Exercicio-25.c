// 25) Busca Binária {Com ajuda do Chat GPT}

#include <stdio.h>

int buscaBinaria(int array[], int inicio, int fim, int valor) {
    if (inicio > fim) {
        return -1;
    }

    int meio = (inicio + fim) / 2;

    if (array[meio] == valor) {
        return meio;
    }

    if (valor < array[meio]) {
        return buscaBinaria(array, inicio, meio - 1, valor);
    } else {
        return buscaBinaria(array, meio + 1, fim, valor);
    }
}

int main() {
    int array[] = {1, 3, 5, 7, 9};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int valor = 9;

    int indice = buscaBinaria(array, 0, tamanho - 1, valor);

    if (indice != -1) {
        printf("Elemento %d encontrado no indice %d.\n", valor, indice);
    } else {
        printf("Elemento %d não encontrado.\n", valor);
    }
}