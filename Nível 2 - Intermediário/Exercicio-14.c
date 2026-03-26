// 14) Conversão de Decimal para Binário

#include <stdio.h>
#include <string.h>

void conversorBinario (int N, int indice, char binario[]) {

    if (N == 0) {

        binario[indice] = '0';
        binario[indice + 1] = '\0';
        return;
    }
    
    else if (N == 1) {

        binario[indice] = '1';
        binario[indice + 1] = '\0';
        return;
    }

    else {

        if (N % 2 == 0) {

            binario[indice] = '0';

            return conversorBinario (N / 2, indice + 1, binario);
        }

        else {

            binario[indice] = '1';
            return conversorBinario (N / 2, indice + 1, binario);
        }
    }
}

void inverterString (char palavra [], int inicial, int final) {

    if (inicial >= final) {
        return;
    }
    
    char temp = palavra [inicial];
    palavra [inicial] = palavra [final];
    palavra [final] = temp;
    
    inverterString (palavra, inicial + 1, final - 1);
}

int main () {

    int N = 14;
    char binario[100];
    
    conversorBinario (N, 0, binario);

    int tamanho = strlen (binario) - 1;

    inverterString (binario, 0, tamanho);

    printf ("O numero %d na representacao binaria: %s", N, binario);
}