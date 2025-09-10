#include <stdio.h>
//Verificar se um jogador pode jogar.
int main(){
    int idade;

    printf("Qual a idade do jogador:");
    scanf("%d", &idade);

    if(idade <= 20){
        printf("O jogador pode jogar na categoria Sub-20");
 }  else {
    printf("O jogador não pode jogar na sub-20");
 }

    return 0;
}