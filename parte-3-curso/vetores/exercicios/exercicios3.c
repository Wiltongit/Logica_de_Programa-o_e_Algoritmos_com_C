//Crie um programa que recebe 10 números inteiros do usuário e retorna um array com apenas os números pares.   
#include <stdio.h>
int main() {
    int numeros[10];
    int pares[10];
    int contadorPares = 0;

    // Leitura dos números
    for(int i = 0; i < 10; i++) {
        printf("Digite o número inteiro %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Filtragem dos números pares
    for(int i = 0; i < 10; i++) {
        if(numeros[i] % 2 == 0) {
            pares[contadorPares] = numeros[i];
            contadorPares++;
        }
    }

    // Exibição dos números pares
    printf("Números pares digitados:\n");
    for(int i = 0; i < contadorPares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    return 0;
}