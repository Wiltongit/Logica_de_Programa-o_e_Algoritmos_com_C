#include <stdio.h>
//Avaliar o desempenho do jogador
//Se fez mais de 10 gols, exibir "Excelente Temporada!"
//Se fez entre 5 e 10 gols(inclusive), exibir "Boa temporada!"
//Se fez menos de 5 gols, exibir "Tempora abaixo do esperado."
int main(){
    int gols;

    printf("Quantos gols o jogador fez na temporada:\n");
    scanf("%d", &gols);

    if(gols > 10){
        printf("Excelente temporada!\n");
    } else if(gols >= 5 && gols <= 10){
        printf("Boa temporada!\n");
    } else
        printf("Temporada abaixo do esperado.\n");
    
    
    return 0;
}