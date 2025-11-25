//Fazer um dequeue em C
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Deque {
    int frente, tras, capacidade;
    int* itens;
};
struct Deque* criarDeque(int capacidade) {
    struct Deque* deque = (struct Deque*)malloc(sizeof(struct Deque));
    deque->capacidade = capacidade;
    deque->frente = -1;
    deque->tras = 0;
    deque->itens = (int*)malloc(capacidade * sizeof(int));
    return deque;
}
bool estaVazia(struct Deque* deque) {
    return deque->frente == -1;
}
bool estaCheia(struct Deque* deque) {
    return (deque->frente == 0 && deque->tras == deque->capacidade - 1) ||
           (deque->frente == deque->tras + 1);
}
bool inserirFrente(struct Deque* deque, int item) {
    if (estaCheia(deque)) {
        return false;
    }
    if (deque->frente == -1) {
        deque->frente = 0;
        deque->tras = 0;
    } else if (deque->frente == 0) {
        deque->frente = deque->capacidade - 1;
    } else {
        deque->frente--;
    }
    deque->itens[deque->frente] = item;
    return true;
}
bool inserirTras(struct Deque* deque, int item) {
    if (estaCheia(deque)) {
        return false;
    }
    if (deque->frente == -1) {
        deque->frente = 0;
        deque->tras = 0;
    } else if (deque->tras == deque->capacidade - 1) {
        deque->tras = 0;
    } else {
        deque->tras++;
    }
    deque->itens[deque->tras] = item;
    return true;
}
int removerFrente(struct Deque* deque) {
    if (estaVazia(deque)) {
        return -1; // Indica que o deque está vazio
    }
    int item = deque->itens[deque->frente];
    if (deque->frente == deque->tras) {
        deque->frente = -1;
        deque->tras = -1;
    } else if (deque->frente == deque->capacidade - 1) {
        deque->frente = 0;
    } else {
        deque->frente++;
    }
    return item;
}
int removerTras(struct Deque* deque) {
    if (estaVazia(deque)) {
        return -1; // Indica que o deque está vazio
    }
    int item = deque->itens[deque->tras];
    if (deque->frente == deque->tras) {
        deque->frente = -1;
        deque->tras = -1;
    } else if (deque->tras == 0) {
        deque->tras = deque->capacidade - 1;
    } else {
        deque->tras--;
    }
    return item;
}
void liberarDeque(struct Deque* deque) {
    free(deque->itens);
    free(deque);
}
int main() {
    struct Deque* deque = criarDeque(5);
    inserirTras(deque, 10);
    inserirTras(deque, 20);
    inserirFrente(deque, 5);
    printf("Removido da frente: %d\n", removerFrente(deque));
    printf("Removido de trás: %d\n", removerTras(deque));
    liberarDeque(deque);
    return 0;
}
