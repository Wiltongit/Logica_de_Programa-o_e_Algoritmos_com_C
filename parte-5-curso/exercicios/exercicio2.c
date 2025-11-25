//Crie uma union chamada Valor que possa armazenar um inteiro, um float ou um char. Crie um programa que permita ao usuário escolher qual tipo deseja armazenar e mostre o valor.

#include <stdio.h>
union Valor {
    int inteiro;
    float flutuante;
    char caractere;
};
int main() {
    union Valor valor;
    int escolha;

    printf("Escolha o tipo de valor a armazenar:\n");
    printf("1. Inteiro\n");
    printf("2. Float\n");
    printf("3. Caractere\n");
    printf("Digite sua escolha (1-3): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Digite um valor inteiro: ");
            scanf("%d", &valor.inteiro);
            printf("Valor armazenado como inteiro: %d\n", valor.inteiro);
            break;
        case 2:
            printf("Digite um valor float: ");
            scanf("%f", &valor.flutuante);
            printf("Valor armazenado como float: %.2f\n", valor.flutuante);
            break;
        case 3:
            printf("Digite um caractere: ");
            getchar(); // Limpa o buffer do teclado
            scanf("%c", &valor.caractere);
            printf("Valor armazenado como caractere: %c\n", valor.caractere);
            break;
        default:
            printf("Escolha inválida!\n");
            break;
    }

    return 0;
}