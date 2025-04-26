#include <stdio.h>

int main() {
    printf("Movimentação do Cavalo:\n\n");

    // Primeiro, o cavalo se move duas casas para baixo.
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Depois, o cavalo se move uma casa para a esquerda.
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n", j++);
        
    }

    return 0;
}