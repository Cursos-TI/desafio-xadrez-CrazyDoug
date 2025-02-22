// Desafio de Xadrez - MateCheck
// Aluno: Douglas Alves Costa

#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Diagonal superior direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Movimento da Torre (5 casas para a direita) usando recursão
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando recursão
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando recursão
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo (em L) usando loop aninhado com múltiplas condições
    printf("Movimento do Cavalo:\n");
    for (int i = 0, j = 0; i < 2 || j < 1; i++) {
        if (i < 2) {
            printf("Cima\n");
        }
        if (i == 1) {
            printf("Direita\n");
            break;
        }
    }
    printf("\n");

    return 0;
}