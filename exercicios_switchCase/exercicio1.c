#include <stdio.h>
//Cardápio Interativo

int main(){
    int opcao;
    printf("Bem vindo, escolha entre as seguintes opções:\n 1-Hamburguer. \n 2-Cachorro-Quente. \n 3-Pizza. \n 4-Sair. \n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("Hamburguer");
        break;
        case 2:
        printf("Cachorro-quente");
        break;
        case 3:
        printf("Pizza");
        break;
        case 4:
        printf("Encerrando pedido");
        break;
        default:
        printf("Opção invalida!");
    }
    


    return 0;
}