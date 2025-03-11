#include <stdio.h>

int main() {
    int i;
    
    // Movimento da Torre: 5 casas para a direita (utilizando for)
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (utilizando while)
    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");
    
    // Movimento da Rainha: 8 casas para a esquerda (utilizando do-while)
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    
    printf("\n");
    
    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda (utilizando loops aninhados)
    printf("Movimento do Cavalo:\n");
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;
    
    for (i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }
    
    int j = 0;
    while (j < movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }
    
    return 0;
}
