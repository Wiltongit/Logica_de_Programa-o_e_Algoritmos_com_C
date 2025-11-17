#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};
int main(){
    struct Pessoa p1;

    printf("Digite o nome: ");
    scanf("%s", p1.nome);
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    printf("Digite a altura: ");
    scanf("%f", &p1.altura);

    printf("Seu nome:%s\n", p1.nome);
    printf("Sua altura:%f\n", p1.altura);
    printf("Sua idade:%d", p1.idade);
    return 0;
}