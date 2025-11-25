//A partir do exercício anterior, adicione uma função que busca um número na lista e retorna se foi encontrado ou não.​

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
int buscarNaLista(struct No* cabeca, int valor) {
    struct No* atual = cabeca;
    while (atual != NULL) {
        if (atual->dado == valor) {
            return 1; // Encontrado
        }
        atual = atual->proximo;
    }
    return 0; // Não encontrado
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

    int valorBusca;
    printf("Digite um número para buscar na lista: ");
    scanf("%d", &valorBusca);
    if (buscarNaLista(cabeca, valorBusca)) {
        printf("Número %d encontrado na lista.\n", valorBusca);
    } else {
        printf("Número %d não encontrado na lista.\n", valorBusca);
    }

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
