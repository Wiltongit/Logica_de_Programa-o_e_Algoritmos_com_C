#include <stdio.h>
//Classificação do jogador baseada em idade e desempenho
int main(){
    int idade, gols;
    printf("Qual a idade do jogador:\n");
    scanf("%d", &idade);

    printf("Quantos gols fez:\n");
    scanf("%d", &gols);

    if(idade > 20 && gols <= 15){
        printf("Estevao\n");
    }else if(idade <= 20 && gols <= 10){
        printf("Jovem em desenvolvimento.\n");
    }else if(idade > 20 && gols > 15){
        printf("Jogador experiente em grande fase!");
    } else if(idade <= 20 && gols > 10){ 
         printf("Jovem talento promissor!");
    }
    return 0;
}