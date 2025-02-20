// Desafio de Xadrez - MateCheck
//Aluno: Douglas Alves Costa

#include <stdio.h>

int main() {

    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Diagonal superior direita\n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    printf("\n");

    // Movimento do Cavalo (em L) usando loop aninhado
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");   
    }
    printf("\n");

    //----------------------------------------------------------------------------------
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
