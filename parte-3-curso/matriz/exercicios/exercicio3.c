#include <stdio.h>

//Dada uma matriz 4x4, exiba a soma da diagonal principal.

int main(){
    int matriz[4][4], soma = 0;
    //Leitura da matriz
    for (int i = 0; i < 4; i++){//Linhas
        for (int j = 0; j < 4; j++){//Colunas
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //Cálculo da soma da diagonal principal
    for (int i = 0; i < 4; i++){
        soma += matriz[i][i];
    }
    printf("Soma da diagonal principal: %d\n", soma);
    return 0;
}