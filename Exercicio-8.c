// 8) Verificação de Palíndromo

#include <stdio.h>
#include <string.h>

int verificarPalindromo (char palavra [], int indexA, int indexB) {

    if (indexA >= indexB) {

        return 1;
    }

    else {

        if (palavra [indexA] != palavra [indexB]) {

            return 0;
        }

        else {

            return verificarPalindromo (palavra, indexA + 1, indexB - 1);
        }
    }
}

int main () {

    char palavra [] = "banana";
    int tamanho = strlen (palavra);

    int resultado = verificarPalindromo (palavra, 0, tamanho - 1);

    if (resultado == 1) {

        printf ("A palavra %s e um palindromo!\n", palavra);
    }

    else {

        printf ("A palavra %s nao e um palindromo!\n", palavra);
    }
}