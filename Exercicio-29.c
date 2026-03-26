// 29) Labirinto com Backtracking {Feito com a ajuda do Chat GPT}

#include <stdio.h>
#include <stdbool.h>

#define N 3
#define M 4

void imprimirLabirinto(int labirinto[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (labirinto[i][j] == 2) {
                printf("* ");
            } else {
                printf("%d ", labirinto[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

bool posicaoValida(int x, int y, int labirinto[N][M]) {
    return (x >= 0 && x < N && y >= 0 && y < M && labirinto[x][y] == 0);
}

bool resolverLabirinto(int x, int y, int labirinto[N][M]) {
    if (!posicaoValida(x, y, labirinto)) {
        return false;
    }

    labirinto[x][y] = 2;

    if (x == N - 1 && y == M - 1) {
        return true;
    }

    if (resolverLabirinto(x, y + 1, labirinto)) return true; 
    if (resolverLabirinto(x + 1, y, labirinto)) return true;

    labirinto[x][y] = 0;
    return false;
}

int main() {
    int labirinto[N][M] = {
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {1, 0, 1, 0}
    };

    if (resolverLabirinto(0, 0, labirinto)) {
        printf("Caminho encontrado:\n");
        imprimirLabirinto(labirinto);
    } else {
        printf("Nenhum caminho encontrado.\n");
    }

    return 0;
}