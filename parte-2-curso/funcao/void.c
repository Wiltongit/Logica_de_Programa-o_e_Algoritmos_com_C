#include <stdio.h>

void exibirMenu(){
    printf("=== MENU DE OPÇÕES ===\n");
    printf("1 - Ver saldo\n");
    printf("2 - Fazer depósito\n");
    printf("3 - Fazer saque\n");
    printf("4 - Sair\n");
    printf("=========================\n");

}

int main(){
    exibirMenu();

    int opcao;
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Você escolheu a opção %d.\n", opcao);
    return 0;

}