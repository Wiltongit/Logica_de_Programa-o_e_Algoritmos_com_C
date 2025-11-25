//Crie uma estrutura chamada pessoa com os campos: nome, idade e altura. Leia os dados de 3 pessoas e imprima os dados da mais velha.
#include <stdio.h>
#include <string.h>
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};
int main() {
    struct Pessoa pessoas[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = 0; // Remove o newline
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &pessoas[i].altura);
        getchar(); // Limpa o buffer do teclado
    }

    struct Pessoa maisVelha = pessoas[0];
    for (int i = 1; i < 3; i++) {
        if (pessoas[i].idade > maisVelha.idade) {
            maisVelha = pessoas[i];
        }
    }

    printf("\nA pessoa mais velha é:\n");
    printf("Nome: %s\n", maisVelha.nome);
    printf("Idade: %d\n", maisVelha.idade);
    printf("Altura: %.2f metros\n", maisVelha.altura);

    return 0;
}