// 11) Contagem de Caracteres

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int contadorCaracteres (char palavra [], int index, int contador, char letra) {

//     if (index >= strlen (palavra)) {

//         return contador;
//     }

//     else {

//         if (palavra [index] != letra) {

//             return contadorCaracteres (palavra, index + 1, contador, letra);
//         }

//         else {

//             return contadorCaracteres (palavra, index + 1, contador + 1, letra);            
//         }
//     }
// }

// int main () {

//     char palavra[] = "abracada";
//     char letra = 'a';

//     printf ("A letra %c aparece %d vezes na palavra %s!", letra, contadorCaracteres (palavra, 0, 0, letra), palavra);
// }

// 12) Soma de Elementos de um Array

// #include <stdio.h>
// #include <stdlib.h>

// int somaElementosArray (int array[], int tamanho, int indice) {

//     if (indice >= tamanho) {

//         return 0;
//     }

//     else {

//         return array [indice] + somaElementosArray (array, tamanho, indice + 1);
//     }
// }

// int main () {

//     int array[] = {1, 2, 3, 4, 5};
//     size_t tamanho = sizeof(array) / sizeof (array[0]); 
    
//     //Nota mental: O retorno de um "sizeof" é size_t, ou seja, foi recomendado usar um tipo diferente de dados;

//     printf ("A soma dos elementos da array: %d", somaElementosArray (array, tamanho, 0));
// }

// 13) Verificação de Número Primo

// #include <stdio.h>

// int verificarPrimo (int N, int divisor) {

//     if (N <= 1) {

//         return 0;
//     }

//     else if (N == 2) {

//         return 1;
//     }

//     else {

//         if (N % divisor == 0) {

//             return 0;
//         }

//         else {

//             if (divisor * divisor > N) {

//                 return 1;
//             }

//             else {

//                 return verificarPrimo (N, divisor + 1);
//             }
//         }
//     }
// }

// int main () {

//     int N = 64;

//     int resultado = verificarPrimo (N, 2);

//     if (resultado == 0) {

//         printf ("O numero nao e primo");
//     }

//     else {

//         printf ("O numero e primo!");
//     }
// }

// 14) Conversão de Decimal para Binário

// #include <stdio.h>
// #include <string.h>

// void conversorBinario (int N, int indice, char binario[]) {

//     if (N == 0) {

//         binario[indice] = '0';
//         binario[indice + 1] = '\0';
//         return;
//     }
    
//     else if (N == 1) {

//         binario[indice] = '1';
//         binario[indice + 1] = '\0';
//         return;
//     }

//     else {

//         if (N % 2 == 0) {

//             binario[indice] = '0';

//             return conversorBinario (N / 2, indice + 1, binario);
//         }

//         else {

//             binario[indice] = '1';
//             return conversorBinario (N / 2, indice + 1, binario);
//         }
//     }
// }

// void inverterString (char palavra [], int inicial, int final) {

//     if (inicial >= final) {
//         return;
//     }
    
//     char temp = palavra [inicial];
//     palavra [inicial] = palavra [final];
//     palavra [final] = temp;
    
//     inverterString (palavra, inicial + 1, final - 1);
// }

// int main () {

//     int N = 14;
//     char binario[100];
    
//     conversorBinario (N, 0, binario);

//     int tamanho = strlen (binario) - 1;

//     inverterString (binario, 0, tamanho);

//     printf ("O numero %d na representacao binaria: %s", N, binario);
// }

// 15) Impressão de Números Pares

// #include <stdio.h>

// void imprimirPares (int N, int contador) {

//     if (contador > N) {

//         return;
//     }

//     else {

//         if (contador % 2 == 0) {

//             printf ("%d\n", contador);
//             return imprimirPares (N, contador + 1);
//         }

//         else {

//             return imprimirPares (N, contador + 1);
//         }
//     }
// }

// int main () {

//     int N = 20;

//     imprimirPares (N, 0);
// }

// 16) Impressão de Números Ímpares

// #include <stdio.h>

// void imprimirImpares (int N, int contador) {

//     if (contador > N) {

//         return;
//     }

//     else {

//         printf ("%d\n", contador);
//         return imprimirImpares (N, contador + 2);
//     }
// }

// int main () {

//     int N = 17;

//     imprimirImpares (N, 1);
// }

// 17) Busca em Array

// #include <stdio.h>

// int verificarArray (int N, int array[], int indice, int tamanho) {

//     if (indice > tamanho) {

//         return 0;
//     }

//     else {

//         if (array[indice] == N) {

//             return 1;
//         }

//         else {

//             return verificarArray (N, array, indice + 1, tamanho);
//         }
//     }
// }

// int main () {

//     int N = 10;
//     int array[] = {5, 8, 12, 3, 7, 1, 9, 0, 4, 6};
//     size_t tamanho = sizeof (array) / sizeof (array[0]);  
//     int resultado = verificarArray (N, array, 0, tamanho);

//     if (resultado == 0) {

//         printf ("O numero %d nao foi encontrado na array", N);
//     }

//     else {

//         printf ("O numero %d foi encontrado na array!", N);
//     }
// }

// 18) Comprimento de uma String

//OBS: Não pode usar "strlen"

// #include <stdio.h>

// int comprimentoString (char palavra[], int indice, int contador) {

//     if (palavra[indice] == '\0') {

//         return contador;
//     }

//     else {

//         return comprimentoString (palavra, indice + 1, contador + 1);
//     }
// }

// int main () {

//     char palavra[] = "Maca";

//     printf ("A palavra %s tem %d letras.", palavra, comprimentoString (palavra, 0, 0));
// }

// 19) Torre de Hanói

// #include <stdio.h>

// void torreHanoi (int n, char origem, char auxiliar, char destino) {

//     if (n == 1) {

//         printf("Mover disco 1 de %c para %c\n", origem, destino);
            
//         return;
//     }

//     else {
        
//         torreHanoi (n - 1, origem, destino, auxiliar);

//         printf("Mover disco %d de %c para %c\n", n, origem, destino);

//         torreHanoi(n - 1, auxiliar, origem, destino);
//     }
// }

// int main() {

//     int n = 3;

//     torreHanoi(n, 'A', 'B', 'C');

//     return 0;
// }

// 20) Permutação de uma String

// #include <stdio.h>
// #include <string.h>

// void trocarPosicoes (char* pontA, char* pontB) {

//     char temporario = *pontA;
//     *pontA = *pontB;
//     *pontB = temporario;
// }

// void permutar(char str[], int inicio, int fim) {
    
//     if (inicio == fim) {

//         printf("%s\n", str);

//         return;
//     }

//     for (int i = inicio; i <= fim; i++) {

//         printf ("Antes da troca: %d, %d. String: %s\n", inicio, i, str);  

//         trocarPosicoes (&str[inicio], &str[i]);  
    
//         printf ("Depois da troca: %d, %d. String: %s \n", inicio, i, str);

//         permutar(str, inicio + 1, fim);

//         trocarPosicoes (&str[inicio], &str[i]);

//         printf ("Depois da troca n2: %d, %d. String: %s \n\n", inicio, i, str); 
//     }
// }

// int main() {

//     char str[] = "abc";
//     int tamanho = strlen(str);

//     printf("Permutacoes de %s:\n", str);
//     permutar(str, 0, tamanho - 1);
// }