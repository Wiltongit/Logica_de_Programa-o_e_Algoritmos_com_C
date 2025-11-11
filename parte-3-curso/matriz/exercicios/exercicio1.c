#include <stdio.h>

//Um banco quer somar todos os valores de uma matriz 2x3 que representa o valor arrecadado por 2 agências em 3 dias. Imprima o total arrecadado.

int main(){
    int valor[2][3], soma = 0;
    for (int i = 0; i < 2; i++){//Linhas
        for (int j = 0; j < 3; j++){//colunas
            printf("Digite o valor arrecado do dia %d da agência %d:", i + 1, j +1);
            scanf("%d ", &valor[i][j]);
            soma += valor[i][j];
            }
        }
        printf("Total arrecadado: R$%d", soma);

}