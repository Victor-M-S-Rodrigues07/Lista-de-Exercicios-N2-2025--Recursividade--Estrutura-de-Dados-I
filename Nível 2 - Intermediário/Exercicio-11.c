// 11) Contagem de Caracteres

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contadorCaracteres (char palavra [], int index, int contador, char letra) {

    if (index >= strlen (palavra)) {

        return contador;
    }

    else {

        if (palavra [index] != letra) {

            return contadorCaracteres (palavra, index + 1, contador, letra);
        }

        else {

            return contadorCaracteres (palavra, index + 1, contador + 1, letra);            
        }
    }
}

int main () {

    char palavra[] = "abracada";
    char letra = 'a';

    printf ("A letra %c aparece %d vezes na palavra %s!", letra, contadorCaracteres (palavra, 0, 0, letra), palavra);
}