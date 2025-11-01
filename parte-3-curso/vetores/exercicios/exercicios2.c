//Crie um programa que leia o dano causado em 4 ataques e exiba qual foi o ataque mais forte. 
#include <stdio.h>
int main() {
    int dano[4];
    int maiorDano = 0;
    int ataqueMaisForte = 0;

    // Leitura dos danos
    for(int i = 0; i < 4; i++) {
        printf("Digite o dano do ataque %d: ", i + 1);
        scanf("%d", &dano[i]);

        // Verifica se este ataque é o mais forte até agora
        if(dano[i] > maiorDano) {
            maiorDano = dano[i];
            ataqueMaisForte = i + 1; // +1 para ajustar ao número do ataque
        }
    }

    // Exibição do ataque mais forte
    printf("O ataque mais forte foi o ataque %d com dano de %d.\n", ataqueMaisForte, maiorDano);

    return 0;
}