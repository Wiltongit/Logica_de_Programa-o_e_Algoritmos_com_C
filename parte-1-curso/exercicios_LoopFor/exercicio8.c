#include <stdio.h> 

int main(){
    int cadastro, estoque, minimo;
    char produto[50];
    printf("Quantos produtos quer cadastrar? ");
    scanf("%d", &cadastro);
    for(int i = 0; i < cadastro; i++){
        printf("\nNome do produto: ");
        scanf("%s", &produto);
        printf("\nQuantidade em estoque:");
        scanf("%d", &estoque);
        printf("\nE qual é o minimo em estoque: ");
        scanf("%d", &minimo);
        if(estoque < minimo){
            printf("\nO produto %s precisa ser reposto. \n(Estoque: %d, Minimo: %d)", produto, estoque, minimo);
        } else printf("\nO produto %s tem estoque o suficiente. \n(Estoque: %d, Minimo: %d)", produto, estoque, minimo);
    }

    return 0;
}