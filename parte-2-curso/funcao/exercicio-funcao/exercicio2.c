#include <stdio.h>
//Verificar vogais
int verificarVogais(char palavra[]){
    int contador = 0;

    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            contador++;
        }
    }
    return contador;
}
int main(){
    char palavra[100];
    printf("Qual é a palavra que quer examinar: ");
    scanf("%s", palavra);
    printf("Quantidade de vogais: %d", verificarVogais(palavra));
    return 0;
}