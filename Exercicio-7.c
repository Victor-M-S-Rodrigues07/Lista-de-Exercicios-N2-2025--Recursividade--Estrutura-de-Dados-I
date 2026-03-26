// 7) Inversão de String

#include <stdio.h>
#include <string.h>

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

    char palavra [] = "Perfume";
    int tamanho = strlen (palavra);

    inverterString (palavra, 0, tamanho - 1);

    printf ("Palavra invertida: %s", palavra);
}