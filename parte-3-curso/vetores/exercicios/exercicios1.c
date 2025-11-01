//Crie um programa que leia os FPS (frames por segundo) de um jogo em 6 momentos e calcule a média. 
#include <stdio.h> 
int main() {
    int fps[6];
    int soma = 0;
    float media;

    // Leitura dos FPS
    for(int i = 0; i < 6; i++) {
        printf("Digite o FPS no momento %d: ", i + 1);
        scanf("%d", &fps[i]);
        soma += fps[i];
    }

    // Cálculo da média
    media = soma / 6.0;

    // Exibição da média
    printf("A média de FPS é: %.2f\n", media);

    return 0;
}