/* Escreva um programa em C que verifica se os parênteses em uma expressão matemática estão balanceados usando uma pilha. Exemplo:

Entrada: (2+3)*(4+(5-1)) → Saída: Balanceado

Entrada: ((3+4)*(2-1) → Saída: Não balanceado​*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct Pilha {
    int topo;
    char itens[MAX];
};
void inicializarPilha(struct Pilha* pilha) {
    pilha->topo = -1;
}
int pilhaVazia(struct Pilha* pilha) {
    return pilha->topo == -1;
}
int pilhaCheia(struct Pilha* pilha) {
    return pilha->topo == MAX - 1;
}
void empilhar(struct Pilha* pilha, char item) {
    if (!pilhaCheia(pilha)) {
        pilha->itens[++pilha->topo] = item;
    }
}
char desempilhar(struct Pilha* pilha) {
    if (!pilhaVazia(pilha)) {
        return pilha->itens[pilha->topo--];
    }
    return '\0'; // Retorna nulo se a pilha estiver vazia
}
int verificarBalanceamento(const char* expressao) {
    struct Pilha pilha;
    inicializarPilha(&pilha);
    for (int i = 0; expressao[i] != '\0'; i++) {
        if (expressao[i] == '(') {
            empilhar(&pilha, '(');
        } else if (expressao[i] == ')') {
            if (pilhaVazia(&pilha)) {
                return 0; // Não balanceado
            }
            desempilhar(&pilha);
        }
    }
    return pilhaVazia(&pilha); // Se a pilha estiver vazia, está balanceado
}
int main() {
    char expressao[256];
    printf("Digite uma expressão matemática: ");
    fgets(expressao, sizeof(expressao), stdin);
    if (verificarBalanceamento(expressao)) {
        printf("Balanceado\n");
    } else {
        printf("Não balanceado\n");
    }
    return 0;
}

    