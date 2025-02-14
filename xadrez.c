#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

const int movimento_bispo = 5;  // Bispo se move 5 casas na diagonal (direta/cima)
const int movimento_torre = 5;  // Torre se move 5 casas para a direita
const int movimento_rainha = 8; // Rainha se move 8 casas para a esquerda
const int movimento_cavalo_baixo = 3; // Cavalo se move 3 casas para baixo
const int movimento_cavalo_esquerda = 1; // Cavalor se move 1 casa pra esquerda

int main() {
    printf("Início do movimento do Bispo...\n");
    for(int i=0; i < movimento_bispo; i++){           // Inicializa o contador i com 0 e o loop roda 5 vezes (movimento_bispo = 5)
        printf("%d - Cima,Direita\n", i+1);           // Imprime o número de casas já percorridas e a direção
    }

    printf("\nInício do movimento da Torre...\n");
    for(int i=0; i < movimento_torre; i++){           // Inicializa o contador i com 0 e o loop roda 5 vezes (movimento_torre = 5)
        printf("%d - Direita\n", i+1);                // Imprime o número de casas já percorridas e a direção
    }

    printf("\nInício do movimento da Rainha...\n");   
    int i=0;                                          // Inicializa o contador i com 0
    while(i < movimento_rainha){                      // O loop roda 8 vezes (movimento_rainha = 8) e acaba quando o contador i fica com valor igual a 8
        printf("%d - Esquerda\n", i+1);               // Imprime o número de casas já percorridas e a direção
        i++;                                          // Adiciona 1 no valor de i
    }

    printf("\nInício do movimento do Cavalo...\n");
    int j=0;
    for(int i=0; i < movimento_cavalo_baixo; i++){    // Inicializa o contador i com 0 e o loop roda 3 vezes (movimento_cavalo_cima = 3)
        printf("%d - Baixo\n", i+1);                  // Imprime o número de casas já percorridas e a direção

        while (i+1 == movimento_cavalo_baixo && j < movimento_cavalo_esquerda) {  // Só começa a ir pra direita após ter terminado o primeiro movimento, do contrário o loop é ignorado
          printf("%d - Esquerda\n", j+1);              // Imprime o número de casas já percorridas e a direção
          j++;
        } 
    }

    return 0;
}