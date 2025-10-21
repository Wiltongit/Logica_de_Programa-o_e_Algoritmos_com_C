#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char idadeStr[10];
    int idade;
    printf("Qual sua idade? ");
    scanf("%s", &idadeStr);

    idade = atoi(idadeStr);

    printf("Idade convertida: %d\n", idade);

    if(idade >= 18){
        printf("Maior de idade!");
    }
    else{
        printf("Menor de idade! ");
    }
    return 0;
}