/*Imagine que você está desenvolvendo um sistema para um jogo online que proíbe o uso de certos caracteres especiais no nome dos jogadores. Escreva um programa em C que:



Leia o nome de usuário digitado pelo jogador (máximo 50 caracteres);

Calcule o tamanho do nome usando strlen();

Verifique se o nome contém algum dos seguintes caracteres proibidos: @, #, $, %, !;

Informe ao usuário quantos caracteres inválidos foram encontrados;

Mostre uma mensagem avisando se o nome é válido ou inválido com base nessa verificação.*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char nome[50];
    int tamanho, proibidos = 0;
    printf("Digite seu nome: ");
    scanf("%s", nome);

    tamanho = strlen(nome);

    for(int i = 0; i < tamanho; i++){
        char c = nome[i];
        if(c == '@' || c == '#' || c == '$' || c == '%' || c == '!'){
            proibidos++;
        }
    }

    
    if(proibidos > 0){
        printf("Nome invalido! %d caractere(s) probibido(s).\n");
    } else {
        printf("Nome valido!\n");
    }
}