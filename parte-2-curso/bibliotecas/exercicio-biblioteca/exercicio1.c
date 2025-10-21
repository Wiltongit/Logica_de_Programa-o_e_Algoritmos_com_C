/*Crie um programa em C que simule a geração de 6 números aleatórios entre 1 e 60, como em um jogo de loteria (ex: Mega Sena). 
Os números devem ser exibidos na tela. Não é necessário garantir que os números sejam diferentes entre si neste primeiro momento.
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(){
    srand(time(NULL));
    printf("Números gerados:\n");
    for(int i = 0; i < 6; i++){
        int numero = (rand() % 60)+1;
        printf("%d ", numero);
    }
    printf("\n");
    return 0;
}