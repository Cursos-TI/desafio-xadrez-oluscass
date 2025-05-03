#include <stdio.h>

// Número de casas que cada peça deve percorrer
#define CASAS_TORRE 3
#define CASAS_BISPO 3
#define CASAS_RAINHA 3
#define LIMITE_CAVALO 3

// Função recursiva para mover a Torre para cima
void moverTorreCima(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

// Função recursiva para mover a Torre para a direita
void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Função recursiva para mover o Bispo para diagonal superior direita
void moverBispo(int vert, int horiz) {
    if (vert <= 0 || horiz <= 0) return;
    printf("Diagonal Superior Direita\n");
    moverBispo(vert - 1, horiz - 1);
}

// Bispo com loops aninhados (loop externo vertical, interno horizontal)
void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            if (i == j) {
                printf("Diagonal Superior Direita (Loop) [%d, %d]\n", i + 1, j + 1);
            }
        }
    }
}

// Função recursiva para mover a Rainha para cima e direita
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverRainha(casas - 1);
}

// Movimento do cavalo com loops aninhados e controle de fluxo
void moverCavalo() {
    for (int i = 0; i < LIMITE_CAVALO; i++) {
        for (int j = 0; j < LIMITE_CAVALO; j++) {
            if ((i == 2 && j == 1)) {
                printf("Cavalo se moveu: Duas casas para cima, uma para a direita\n");
            } else {
                continue;
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorreCima(CASAS_TORRE);
    moverTorreDireita(CASAS_TORRE);

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispo(CASAS_BISPO, CASAS_BISPO);

    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(CASAS_BISPO);

    printf("\nMovimento da Rainha:\n");
    moverRainha(CASAS_RAINHA);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
