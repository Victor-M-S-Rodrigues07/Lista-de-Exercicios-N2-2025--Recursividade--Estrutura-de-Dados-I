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

// #include <stdio.h>

// void merge (int array[], int inicio, int meio, int fim) {

//     int N1 = meio - inicio + 1; 
//     int N2 = fim - meio;

//     int esquerda[N1], direita[N2];

//     for (int i = 0; i < N1; i++) {
        
//         esquerda[i] = array[inicio + i];
//     }
        
//     for (int j = 0; j < N2; j++) {

//         direita[j] = array[meio + 1 + j];
//     }   

//     int i = 0, j = 0, k = inicio;

//     while (i < N1 && j < N2) {

//         if (esquerda[i] <= direita[j]) {

//             array[k] = esquerda[i];
//             i++;
//         } 
        
//         else {

//             array[k] = direita[j];
//             j++;
//         }

//         k++;
//     }

//     while (i < N1) {

//         array[k] = esquerda[i];
//         i++;
//         k++;
//     }

//     while (j < N2) {

//         array[k] = direita[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort (int array[], int inicio, int fim) {

//     if (inicio < fim) {

//         int meio = (inicio + fim) / 2;

//         mergeSort (array, inicio, meio);

//         mergeSort (array, meio + 1, fim);

//         merge (array, inicio, meio, fim);
//     }
// }

// void imprimirArray (int array[], int tamanho) {

//     printf ("{");

//     for (int i = 0; i < tamanho; i++) {

//         printf ("%d", array[i]);

//         if (i < tamanho - 1) {

//             printf (", ");
//         }
//     }

//     printf ("}\n");
// }

// int main () {

//     int array[] = {5, 3, 8, 1, 6, 7, 10, 2 , 3};
//     int tamanho = sizeof (array) / sizeof (array[0]);

//     printf ("Array original: ");
//     imprimirArray (array, tamanho);

//     mergeSort (array, 0, tamanho - 1);

//     printf ("Array ordenado: ");
//     imprimirArray (array, tamanho);
// }

// 24) Quick Sort {Com ajuda do Chat GPT}

// #include <stdio.h>

// void trocar(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int particionar(int array[], int inicio, int fim) {

//     int pivo = array[fim];  
//     int i = inicio - 1; 

//     for (int j = inicio; j < fim; j++) {
//         if (array[j] <= pivo) {
//             i++;
//             trocar(&array[i], &array[j]);
//         }
//     }

//     trocar(&array[i + 1], &array[fim]);
//     return i + 1;
// }

// void quickSort(int array[], int inicio, int fim) {
//     if (inicio < fim) {
//         int pi = particionar(array, inicio, fim);

//         quickSort(array, inicio, pi - 1);
//         quickSort(array, pi + 1, fim);
//     }
// }

// void imprimirArray(int array[], int tamanho) {
//     printf("{");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d", array[i]);
//         if (i < tamanho - 1) {
//             printf(", ");
//         }
//     }
//     printf("}\n");
// }

// int main() {
//     int array[] = {9, 2, 5, 1, 7};
//     int tamanho = sizeof(array) / sizeof(array[0]);

//     printf("Array original: ");
//     imprimirArray(array, tamanho);

//     quickSort(array, 0, tamanho - 1);

//     printf("Array ordenado: ");
//     imprimirArray(array, tamanho);
// }

// 25) Busca Binária {Com ajuda do Chat GPT}

// #include <stdio.h>

// int buscaBinaria(int array[], int inicio, int fim, int valor) {
//     if (inicio > fim) {
//         return -1;
//     }

//     int meio = (inicio + fim) / 2;

//     if (array[meio] == valor) {
//         return meio;
//     }

//     if (valor < array[meio]) {
//         return buscaBinaria(array, inicio, meio - 1, valor);
//     } else {
//         return buscaBinaria(array, meio + 1, fim, valor);
//     }
// }

// int main() {
//     int array[] = {1, 3, 5, 7, 9};
//     int tamanho = sizeof(array) / sizeof(array[0]);
//     int valor = 9;

//     int indice = buscaBinaria(array, 0, tamanho - 1, valor);

//     if (indice != -1) {
//         printf("Elemento %d encontrado no indice %d.\n", valor, indice);
//     } else {
//         printf("Elemento %d não encontrado.\n", valor);
//     }
// }

// 26) Exponenciação Rápida {Com ajuda do Chat GPT devido à DeadLine}

// #include <stdio.h>

// int exponenciacaoRapida(int x, int n) {
//     if (n == 0) {
//         return 1;
//     }

//     int metade = exponenciacaoRapida(x, n / 2);

//     if (n % 2 == 0) {
//         return metade * metade;
//     } else {
//         return x * metade * metade;
//     }
// }

// int main() {
//     int x = 2;
//     int n = 4;

//     int resultado = exponenciacaoRapida(x, n);

//     printf("%d^%d = %d\n", x, n, resultado);

//     return 0;
// }

// 27) Caminho em uma Matriz {Com a ajuda do Chat GPT}

// #include <stdio.h>

// #define MAX 100

// void imprimirCaminho(int caminho[], int tamanho) {
//     for (int i = 0; i < tamanho; i++) {
//         printf("(%d,%d) ", caminho[i*2], caminho[i*2+1]);
//         if (i < tamanho - 1) {
//             printf("-> ");
//         }
//     }
//     printf("\n");
// }

// void encontrarCaminhos(int x1, int y1, int x2, int y2, int caminho[], int posicao) {
//     caminho[posicao++] = x1;
//     caminho[posicao++] = y1;

//     if (x1 == x2 && y1 == y2) {
//         imprimirCaminho(caminho, posicao / 2);
//         return;
//     }

//     if (x1 < x2) {
//         encontrarCaminhos(x1 + 1, y1, x2, y2, caminho, posicao);
//     }

//     if (y1 < y2) {
//         encontrarCaminhos(x1, y1 + 1, x2, y2, caminho, posicao);
//     }
// }

// int main() {
//     int linhas = 3;
//     int colunas = 3;

//     int caminho[MAX];

//     printf("Todos os caminhos de (0,0) ate (%d,%d):\n", linhas-1, colunas-1);
//     encontrarCaminhos(0, 0, linhas - 1, colunas - 1, caminho, 0);
// }

// 28) Problema das N-Rainhas {Feito com a ajuda do Chat GPT}

// #include <stdio.h>
// #include <stdbool.h>

// #define N 6 //Aqui que muda a quantidade de Rainhas

// void imprimirTabuleiro(int tabuleiro[N][N]) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             if (tabuleiro[i][j]) {
//                 printf("Q ");
//             } else {
//                 printf(". ");
//             }
//         }
//         printf("\n");
//     }
//     printf("\n");
// }

// bool podeColocar(int tabuleiro[N][N], int linha, int coluna) {
//     int i, j;

//     for (i = 0; i < linha; i++) {
//         if (tabuleiro[i][coluna])
//             return false;
//     }

//     for (i = linha, j = coluna; i >= 0 && j >= 0; i--, j--) {
//         if (tabuleiro[i][j])
//             return false;
//     }

//     for (i = linha, j = coluna; i >= 0 && j < N; i--, j++) {
//         if (tabuleiro[i][j])
//             return false;
//     }

//     return true;
// }

// bool resolverNQueens(int tabuleiro[N][N], int linha) {

//     if (linha >= N) {
//         imprimirTabuleiro(tabuleiro);
//         return true;
//     }

//     bool encontrouSolucao = false;

//     for (int coluna = 0; coluna < N; coluna++) {
//         if (podeColocar(tabuleiro, linha, coluna)) {
//             tabuleiro[linha][coluna] = 1;

//             encontrouSolucao = resolverNQueens(tabuleiro, linha + 1) || encontrouSolucao;

//             tabuleiro[linha][coluna] = 0;
//         }
//     }

//     return encontrouSolucao;
// }

// int main() {
//     int tabuleiro[N][N] = {0};

//     resolverNQueens(tabuleiro, 0);

// }

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