// 30) Gerador de Parênteses Válidos {Feito com a ajuda do chat GPT...}

#include <stdio.h>

void gerarParenteses(int n, int abertos, int fechados, char resultado[], int posicao) {
    
    if (abertos == n && fechados == n) {
        resultado[posicao] = '\0';  
        printf("%s\n", resultado);
        return;
    }

    if (abertos < n) {
        resultado[posicao] = '(';
        gerarParenteses(n, abertos + 1, fechados, resultado, posicao + 1);
    }

    if (fechados < abertos) {
        resultado[posicao] = ')';
        gerarParenteses(n, abertos, fechados + 1, resultado, posicao + 1);
    }
}

int main() {
    int n = 3; 
    char resultado[2 * n + 1];

    printf("Combinacoes de %d pares de parenteses:\n", n);
    gerarParenteses(n, 0, 0, resultado, 0);

    return 0;
}