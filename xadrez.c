#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n"); // Imprime a direção do movimento
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casasVertical, int casasHorizontal) {
    if (casasVertical <= 0) return; // Condição de parada
    for (int j = 0; j < casasHorizontal; j++) {
        printf("Direita\n"); // Movimento horizontal
    }
    printf("Cima\n"); // Movimento vertical
    moverBispo(casasVertical - 1, casasHorizontal); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Esquerda\n"); // Imprime a direção do movimento
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do Cavalo
void moverCavalo() {
    // O Cavalo se move em "L": duas casas para cima e uma para a direita
    for (int i = 0; i < 2; i++) {
        printf("Cima\n"); // Movimento para cima
    }
    printf("Direita\n"); // Movimento para a direita
}

int main() {
    // Definindo o número de casas a serem movidas
    const int casasTorre = 5;
    const int casasBispoVertical = 5;
    const int casasBispoHorizontal = 1; // Movimento horizontal do Bispo
    const int casasRainha = 8;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n"); // Linha em branco para separação

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);
    printf("\n"); // Linha em branco para separação

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n"); // Linha em branco para separação

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n"); // Linha em branco para separação

    return 0;
}