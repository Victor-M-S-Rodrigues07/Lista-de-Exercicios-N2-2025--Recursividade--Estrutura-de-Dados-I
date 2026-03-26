// 27) Caminho em uma Matriz {Com a ajuda do Chat GPT}

#include <stdio.h>

#define MAX 100

void imprimirCaminho(int caminho[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("(%d,%d) ", caminho[i*2], caminho[i*2+1]);
        if (i < tamanho - 1) {
            printf("-> ");
        }
    }
    printf("\n");
}

void encontrarCaminhos(int x1, int y1, int x2, int y2, int caminho[], int posicao) {
    caminho[posicao++] = x1;
    caminho[posicao++] = y1;

    if (x1 == x2 && y1 == y2) {
        imprimirCaminho(caminho, posicao / 2);
        return;
    }

    if (x1 < x2) {
        encontrarCaminhos(x1 + 1, y1, x2, y2, caminho, posicao);
    }

    if (y1 < y2) {
        encontrarCaminhos(x1, y1 + 1, x2, y2, caminho, posicao);
    }
}

int main() {
    int linhas = 3;
    int colunas = 3;

    int caminho[MAX];

    printf("Todos os caminhos de (0,0) ate (%d,%d):\n", linhas-1, colunas-1);
    encontrarCaminhos(0, 0, linhas - 1, colunas - 1, caminho, 0);
}