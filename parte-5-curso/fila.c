//Fazer um enqueue simples em C usando alocação dinâmica de memória
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Fila {
    int frente, tras, capacidade;
    int* itens;
};
struct Fila* criarFila(int capacidade) {
    struct Fila* fila = (struct Fila*)malloc(sizeof(struct Fila));
    fila->capacidade = capacidade;
    fila->frente = 0;
    fila->tras = -1;
    fila->itens = (int*)malloc(capacidade * sizeof(int));
    return fila;
}
bool estaVazia(struct Fila* fila) {
    return fila->tras < fila->frente;
}
bool estaCheia(struct Fila* fila) {
    return fila->tras - fila->frente + 1 == fila->capacidade;
}
bool enqueue(struct Fila* fila, int item) {
    if (estaCheia(fila)) {
        return false;
    }
    fila->itens[++fila->tras] = item;
    return true;
}
int dequeue(struct Fila* fila) {
    if (estaVazia(fila)) {
        return -1; // Indica que a fila está vazia
    }
    return fila->itens[fila->frente++];
}
int frente(struct Fila* fila) {
    if (estaVazia(fila)) {
        return -1; // Indica que a fila está vazia
    }
    return fila->itens[fila->frente];
}
void liberarFila(struct Fila* fila) {
    free(fila->itens);
    free(fila);
}
int main() {
    struct Fila* fila = criarFila(5);
    enqueue(fila, 10);
    enqueue(fila, 20);
    enqueue(fila, 30);
    printf("Frente da fila: %d\n", frente(fila));
    printf("Desenfileirado: %d\n", dequeue(fila));
    printf("Frente da fila após desenfileirar: %d\n", frente(fila));
    liberarFila(fila);
    return 0;
}
