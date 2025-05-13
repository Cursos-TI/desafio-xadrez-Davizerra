#include <stdio.h>

/*
  Simulação de movimentos de peças de xadrez:
  - Torre: 5 casas para a direita (usando for)
  - Bispo: 5 casas na diagonal cima-direita (usando while)
  - Rainha: 8 casas para a esquerda (usando do-while)
*/

int main() {
    // Variáveis para controle do loop
    int i;

    // ----------------------------
    // Movimento da TORRE - FOR
    // ----------------------------
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ----------------------------
    // Movimento do BISPO - WHILE
    // ----------------------------
    printf("Movimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // ----------------------------
    // Movimento da RAINHA - DO-WHILE
    // ----------------------------
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}
