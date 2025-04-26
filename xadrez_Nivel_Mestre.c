#include <stdio.h>

// Definindo constantes de movimento
#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8

// Função recursiva para movimentar a Torre para a direita
void moverTorre(int casas) {
    if (casas <= 0) {
        return; // Caso base: não há mais casas para mover
    }
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva diminuindo o número de casas
}

// Função recursiva para movimentar a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função usando loops aninhados para movimentar o Bispo (vertical e horizontal)
void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) { // Loop vertical (Cima)
        printf("Cima\n");
        for (int j = 0; j < 1; j++) { // Loop horizontal (Direita, só 1 casa por vez)
            printf("Direita\n");
        }
    }
}

// Função para movimentar o Cavalo com loops complexos
void moverCavalo() {
    printf("Movimentação do Cavalo:\n\n");

    int movimentos = 1; // Fazer apenas um movimento de L

    for (int i = 0; i < movimentos; i++) { 
        int subida = 0;
        int direita = 0;

        // Loop para subir duas casas
        while (subida < 2) {
            printf("Cima\n");
            subida++;

            if (subida == 2) {
                break; // Após subir duas casas, sair do while
            }
        }

        // Loop para mover uma casa para a direita
        do {
            if (direita == 1) {
                break; // Se já moveu uma vez para direita, sai
            }
            printf("Direita\n");
            direita++;
        } while (1); // Loop infinito controlado por break
    }
}

int main() {
    // Movimento da Torre
    printf("Movimentação da Torre:\n\n");
    moverTorre(CASAS_TORRE);
    printf("\n");

    // Movimento da Rainha
    printf("Movimentação da Rainha:\n\n");
    moverRainha(CASAS_RAINHA);
    printf("\n");

    // Movimento do Bispo (com recursividade)
    printf("Movimentação do Bispo (Recursivo):\n\n");
    moverBispoRecursivo(CASAS_BISPO);
    printf("\n");

    // Movimento do Bispo (com loops aninhados)
    printf("Movimentação do Bispo (Loops Aninhados):\n\n");
    moverBispoComLoops(CASAS_BISPO);
    printf("\n");

    // Movimento do Cavalo
    moverCavalo();
    printf("\n");

    return 0;
}