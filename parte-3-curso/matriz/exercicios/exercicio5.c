#include <stdio.h>

//Uma matriz identidade é uma matriz quadrada onde os elementos da diagonal principal são 1 e os demais são 0. Escreva um programa que leia uma matriz 4x4, diga se ela é uma matriz identidade e exiba a matriz formatada.

int main(){
    int matriz[4][4];
    int ehIdentidade = 1;

    // Leitura da matriz 4x4
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificação se é matriz identidade
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if ((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0)) {
                ehIdentidade = 0;
                break;
            }
        }
        if (!ehIdentidade) {
            break;
        }
    }

    // Impressão da matriz formatada
    printf("Matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Resultado da verificação
    if (ehIdentidade) {
        printf("A matriz é uma matriz identidade.\n");
    } else {
        printf("A matriz não é uma matriz identidade.\n");
    }

    return 0;
}