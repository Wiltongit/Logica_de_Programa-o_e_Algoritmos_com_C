//Um sensor envia a temperatura de um ambiente como texto, por exemplo "25.7". Escreva um programa que leia essa temperatura como string, converta para float com atof e depois informe se o ambiente está frio (abaixo de 18°C), agradável (entre 18°C e 26°C) ou quente (acima de 26°C).
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char temperaturaStr[10];
    int temperatura;
    printf("Qual a temperatura: ");
    scanf("%s", &temperaturaStr);
    
    temperatura = atof(temperaturaStr);

    if(temperatura < 18){
        printf("Está frio");
    }
    else if(temperatura >= 18 && temperatura <= 26){
        printf("Agradável");
    }
    else{
        printf("Quente!!");
    }
    return 0;
}