// 28) Problema das N-Rainhas {Feito com a ajuda do Chat GPT}

#include <stdio.h>
#include <stdbool.h>

#define N 6 //Aqui que muda a quantidade de Rainhas

void imprimirTabuleiro(int tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (tabuleiro[i][j]) {
                printf("Q ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

bool podeColocar(int tabuleiro[N][N], int linha, int coluna) {
    int i, j;

    for (i = 0; i < linha; i++) {
        if (tabuleiro[i][coluna])
            return false;
    }

    for (i = linha, j = coluna; i >= 0 && j >= 0; i--, j--) {
        if (tabuleiro[i][j])
            return false;
    }

    for (i = linha, j = coluna; i >= 0 && j < N; i--, j++) {
        if (tabuleiro[i][j])
            return false;
    }

    return true;
}

bool resolverNQueens(int tabuleiro[N][N], int linha) {

    if (linha >= N) {
        imprimirTabuleiro(tabuleiro);
        return true;
    }

    bool encontrouSolucao = false;

    for (int coluna = 0; coluna < N; coluna++) {
        if (podeColocar(tabuleiro, linha, coluna)) {
            tabuleiro[linha][coluna] = 1;

            encontrouSolucao = resolverNQueens(tabuleiro, linha + 1) || encontrouSolucao;

            tabuleiro[linha][coluna] = 0;
        }
    }

    return encontrouSolucao;
}

int main() {
    int tabuleiro[N][N] = {0};

    resolverNQueens(tabuleiro, 0);

}