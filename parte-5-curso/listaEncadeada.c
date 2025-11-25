//Criando uma lista encadeada
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct No{
    int dado;
    struct No* proximo;
};
int main(){
    struct No* primeiro = (struct No*)malloc(sizeof(struct No));
    primeiro->dado = 10;
    struct No* segundo = (struct No*)malloc(sizeof(struct No));
    segundo->dado = 20;
    primeiro->proximo = segundo;
    printf("Dado do primeiro nó: %d\n", primeiro->dado);
    printf("Endereço do próximo nó: %p\n", primeiro->proximo->dado);   
    return 0;
}
