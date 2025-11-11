#include <stdio.h>
#include <stdlib.h>
//Aloque dinamicamente uma matriz m x n, preencha-a e imprima a soma de cada linha.
int main() {
    int m, n;
    printf("Digite o numero de linhas (m): ");
    scanf("%d", &m);
    printf("Digite o numero de colunas (n): ");
    scanf("%d", &n);

    // Alocando dinamicamente a matriz
    int **matriz = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));
    }

    // Preenchendo a matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculando e imprimindo a soma de cada linha
    printf("Soma de cada linha:\n");
    for (int i = 0; i < m; i++) {
        int soma = 0;
        for (int j = 0; j < n; j++) {
            soma += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i, soma);
    }

    // Liberando a memória alocada
    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
