//Implemente uma lista ligada simples que insere 5 números inteiros no final da lista e imprime todos.​

#include <stdio.h>
#include <stdlib.h>
struct No {
    int dado;
    struct No* proximo;
};
void inserirNoFinal(struct No** cabeca, int novoDado) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    struct No* ultimo = *cabeca;
    novoNo->dado = novoDado;
    novoNo->proximo = NULL;
    if (*cabeca == NULL) {
        *cabeca = novoNo;
        return;
    }
    while (ultimo->proximo != NULL) {
        ultimo = ultimo->proximo;
    }
    ultimo->proximo = novoNo;
}
void imprimirLista(struct No* no) {
    while (no != NULL) {
        printf("%d -> ", no->dado);
        no = no->proximo;
    }
    printf("NULL\n");
}
int main() {
    struct No* cabeca = NULL;
    int numeros[5];

    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        inserirNoFinal(&cabeca, numeros[i]);
    }

    printf("Lista ligada criada:\n");
    imprimirLista(cabeca);

    // Liberar memória
    struct No* atual = cabeca;
    struct No* proximo;
    while (atual != NULL) {
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    return 0;
}
