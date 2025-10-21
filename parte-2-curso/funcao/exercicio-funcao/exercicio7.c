//Avaliar jogadores
#include <stdio.h>
void mediaJogador(float not1, float not2, float not3){
    float media;
    media = (not1 + not2 + not3) / 3;
    if(media >= 9){
        printf("Excelente jogador! ");
    }
    else if(media >= 7 && media < 9){
        printf("Bom jogador! ");
    }
    else if(media >= 5 && media < 7){
        printf("Jogador regular! ");
    }
    else printf("Ruim!! ");
}
int main(){
    float not1, not2, not3, media;
    printf("Digite as 3 notas do jogador desejado: ");
    scanf("%f %f %f", &not1, &not2, &not3);
    mediaJogador(not1, not2, not3);
    return 0;
}