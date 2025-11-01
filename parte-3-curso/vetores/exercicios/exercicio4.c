//Crie um programa que recebe 5 nomes e imprime apenas os nomes que contêm um determinado caracter definido pelo usuário. Exemplo: letra 'a'.
#include <stdio.h>
#include <string.h>
int main() {
    char nomes[5][50];
    char caracter;
    
    // Leitura dos nomes
    for(int i = 0; i < 5; i++) {
        printf("Digite o nome %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        // Remover o caractere de nova linha, se presente
        nomes[i][strcspn(nomes[i], "\n")] = 0;
    }

    // Leitura do caracter a ser buscado
    printf("Digite o caracter a ser buscado nos nomes: ");
    scanf(" %c", &caracter);

    // Exibição dos nomes que contêm o caracter
    printf("Nomes que contêm o caracter '%c':\n", caracter);
    for(int i = 0; i < 5; i++) {
        if(strchr(nomes[i], caracter) != NULL) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}