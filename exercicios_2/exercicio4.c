#include <stdio.h>

int main(){

    int vitorias , empate , derrota, total; //Vitoria = 3 pontos, Empate = 1 ponto e Derrota = 0.
    
    printf("Quantas vitorias teve: ");
    scanf("\n%d", &vitorias);

    printf("E quantos empates: ");
    scanf("\n%d", &empate);

    printf("Quantas derrotas:");
    scanf("\n%d", &derrota);

    total = (3*vitorias)+(1*empate);

    printf("O aproveitamento do time foi: %d", total);



    return 0;
}