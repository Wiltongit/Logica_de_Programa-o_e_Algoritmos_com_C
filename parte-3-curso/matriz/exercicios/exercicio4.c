#include <stdio.h>

//Dada uma matriz 3x2, imprima a sua transposta (2x3).

int main() {
    int matriz[3][2], transposta[2][3];

    // Leitura da matriz 3x2
    printf("Digite os elementos da matriz 3x2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da transposta 2x3
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Impressão da matriz transposta
    printf("Matriz transposta 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}