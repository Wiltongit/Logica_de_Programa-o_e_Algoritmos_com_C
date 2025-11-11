#include <stdio.h>
#include <stdlib.h>
//Crie uma função que inverte uma string alocada dinamicamente usando ponteiros.

void inverteString(char *str) {
    char *inicio = str;
    char *fim = str;

    // Move o ponteiro 'fim' para o final da string
    while (*fim != '\0') {
        fim++;
    }
    fim--; // Ajusta para o último caractere válido

    // Troca os caracteres do início e do fim até o meio da string
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}
int main() {
    int tamanho;
    char *string;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    // Aloca dinamicamente a string (+1 para o caractere nulo)
    string = (char *) malloc((tamanho + 1) * sizeof(char));

    if (string == NULL) {
        printf("Erro: memoria insuficiente.");
        return 1;
    }

    printf("Digite a string: ");
    scanf(" %[^\n]", string); // Lê uma linha inteira incluindo espaços

    inverteString(string);

    printf("String invertida: %s\n", string);

    free(string);
    return 0;
}