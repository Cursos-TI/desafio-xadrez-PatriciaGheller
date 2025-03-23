#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    
    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int t = 0; t < casasTorre; t++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal (Cima e Direita)
    printf("\nMovimento do Bispo:\n");
    int b = 0;
    while (b < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a direção do movimento
        b++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < casasRainha);

    // Separação dos movimentos do Cavalo
    printf("\nMovimento do Cavalo:\n");
    
    // Definindo o número de casas a serem movidas pelo Cavalo
    int movimentoCompleto = 1; // Flag para controlar o movimento em 'L'

    // Loop para o movimento do Cavalo
    while (movimentoCompleto--) {
        // Loop para mover duas casas para cima
        for (int i = 0; i < 2; i++) {
            printf("Cima\n"); // Imprime "Cima" duas vezes
        }
        printf("Direita\n"); // Imprime "Direita" uma vez
    }

    return 0;
}