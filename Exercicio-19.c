// 19) Torre de Hanói

#include <stdio.h>

void torreHanoi (int n, char origem, char auxiliar, char destino) {

    if (n == 1) {

        printf("Mover disco 1 de %c para %c\n", origem, destino);
            
        return;
    }

    else {
        
        torreHanoi (n - 1, origem, destino, auxiliar);

        printf("Mover disco %d de %c para %c\n", n, origem, destino);

        torreHanoi(n - 1, auxiliar, origem, destino);
    }
}

int main() {

    int n = 3;

    torreHanoi(n, 'A', 'B', 'C');

    return 0;
}