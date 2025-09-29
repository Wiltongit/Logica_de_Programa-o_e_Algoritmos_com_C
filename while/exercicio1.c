#include <stdio.h>

int main(){
    int moedas, rodadas = 0, total = 0;

    while (total < 100) {
     printf("Digite a quantidade de moedas coletadas nessa rodada: ");
     scanf("%d", &moedas);
     total += moedas;
     rodadas++;
    }
    printf("Meta atingida em %d rodadas! \n", rodadas);

    return 0;
}