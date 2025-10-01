#include <stdio.h>

int main(){
    int n, par = 2;
    printf("Digite um numero para as linhas da piramide: ");
    scanf("%d", &n);
    // Laço para controlar as linhas
    for (int i = 1; i <= n; i++) {
        // Laço para controlar quantos números imprimir em cada linha
        for (int j = 1; j <= i; j++) {
            printf("%d ", par); // Imprime o número par atual
            par += 2;
        }
        printf("\n"); // Pula para a próxima linha ao final de cada fileira
    }

    return 0;
}