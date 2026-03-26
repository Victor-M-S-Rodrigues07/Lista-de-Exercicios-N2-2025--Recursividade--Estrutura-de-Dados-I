// 18) Comprimento de uma String

// OBS: Não pode usar "strlen"

#include <stdio.h>

int comprimentoString (char palavra[], int indice, int contador) {

    if (palavra[indice] == '\0') {

        return contador;
    }

    else {

        return comprimentoString (palavra, indice + 1, contador + 1);
    }
}

int main () {

    char palavra[] = "Maca";

    printf ("A palavra %s tem %d letras.", palavra, comprimentoString (palavra, 0, 0));
}