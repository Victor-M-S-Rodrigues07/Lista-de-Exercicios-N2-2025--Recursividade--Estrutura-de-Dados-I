// 20) Permutação de uma String

#include <stdio.h>
#include <string.h>

void trocarPosicoes (char* pontA, char* pontB) {

    char temporario = *pontA;
    *pontA = *pontB;
    *pontB = temporario;
}

void permutar(char str[], int inicio, int fim) {
    
    if (inicio == fim) {

        printf("%s\n", str);

        return;
    }

    for (int i = inicio; i <= fim; i++) {

        printf ("Antes da troca: %d, %d. String: %s\n", inicio, i, str);  

        trocarPosicoes (&str[inicio], &str[i]);  
    
        printf ("Depois da troca: %d, %d. String: %s \n", inicio, i, str);

        permutar(str, inicio + 1, fim);

        trocarPosicoes (&str[inicio], &str[i]);

        printf ("Depois da troca n2: %d, %d. String: %s \n\n", inicio, i, str); 
    }
}

int main() {

    char str[] = "abc";
    int tamanho = strlen(str);

    printf("Permutacoes de %s:\n", str);
    permutar(str, 0, tamanho - 1);
}