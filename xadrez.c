#include <stdio.h>

// Definindo constantes para quantidade de movimentos.
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

int main() {
    int i; // variável de controle para os Loops

    // Movimentos do Bispo: 5 vezes na diagonal superior direita (Cima + Direita)
    printf("Movimentação do Bispo:\n");
    for (i = 0; i < MOVIMENTOS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Torre: 5 vezes para a direita.
    printf("Movimentação da Torre:\n");
    i = 0;
    while(i < MOVIMENTOS_TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Movimentação da Rainha: 8 vezes para a eqsuerda.
    printf("Movimentação da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < MOVIMENTOS_RAINHA);

    return 0;

}