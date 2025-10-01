#include <stdio.h>
//Verificar se o jogador recebeu cartão vermelho
int main(){

    int cartaoamarelho;
    printf("Quantos cartões amarelhos o jogador recebeu: ");
    scanf("%d", &cartaoamarelho);
    
    if(cartaoamarelho == 2) {
        printf("Cartão vermelho");
    } else {
        printf("Sem cartão vermelho");
    }

    return 0;
}