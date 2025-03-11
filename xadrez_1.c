#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    // Movimento da Torre: 5 casas para a direita (recursividade)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");
    
    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (recursividade)
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");
    
    // Movimento da Rainha: 8 casas para a esquerda (recursividade)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");
    
    // Movimento do Cavalo: 2 casas para cima e 1 para a direita (loops aninhados)
    printf("Movimento do Cavalo:\n");
    int movimentosCima = 2;
    int movimentosDireita = 1;
    
    for (int i = 0; i < movimentosCima; i++) {
        printf("Cima\n");
    }
    
    for (int j = 0; j < movimentosDireita; j++) {
        printf("Direita\n");
    }
    
    return 0;
}
