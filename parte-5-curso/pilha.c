// Fazer uma pilha simples em C usando alocação dinâmica de memória
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100
struct Pilha {
    int topo;
    int* itens;
};
struct Pilha* criarPilha() {
    struct Pilha* pilha = (struct Pilha*)malloc(sizeof(struct Pilha));
    pilha->itens = (int*)malloc(MAX * sizeof(int));
    pilha->topo = -1;
    return pilha;
}
bool estaVazia(struct Pilha* pilha) {
    return pilha->topo == -1;
}
bool estaCheia(struct Pilha* pilha) {
    return pilha->topo == MAX - 1;
}
bool empilhar(struct Pilha* pilha, int item) {
    if (estaCheia(pilha)) {
        return false;
    }
    pilha->itens[++pilha->topo] = item;
    return true;
}
int desempilhar(struct Pilha* pilha) {
    if (estaVazia(pilha)) {
        return -1; // Indica que a pilha está vazia
    }
    return pilha->itens[pilha->topo--];
}
int topo(struct Pilha* pilha) {
    if (estaVazia(pilha)) {
        return -1; // Indica que a pilha está vazia
    }
    return pilha->itens[pilha->topo];
}
void liberarPilha(struct Pilha* pilha) {
    free(pilha->itens);
    free(pilha);
}
int main() {
    struct Pilha* pilha = criarPilha();
    empilhar(pilha, 10);
    empilhar(pilha, 20);
    empilhar(pilha, 30);
    printf("Topo da pilha: %d\n", topo(pilha));
    printf("Desempilhado: %d\n", desempilhar(pilha));
    printf("Topo da pilha após desempilhar: %d\n", topo(pilha));
    liberarPilha(pilha);
    return 0;
}
