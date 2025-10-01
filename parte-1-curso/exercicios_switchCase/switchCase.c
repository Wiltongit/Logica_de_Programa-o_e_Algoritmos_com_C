#include <stdio.h>

int main(){
    int opcao;
    printf("Qual gaveta quer abrir?\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
        printf("Gaveta 1");
        break;
        case 2:
        printf("Gaveta 2");
        break;
        case 3:
        printf("Gaveta 3");
        break;
        default:
        printf("Opcao invalida");
    }

    return 0;
}