/*Implemente uma fila para simular o atendimento em um banco. O programa deve permitir:

Inserir cliente na fila

Atender (remover) o próximo cliente

Mostrar a fila atual*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
typedef struct {
    char nome[50];
} Cliente;
typedef struct {
    Cliente clientes[MAX];
    int frente;
    int tras;
} Fila;
void inicializarFila(Fila* fila) {
    fila->frente = 0;
    fila->tras = 0;
}
int filaVazia(Fila* fila) {
    return fila->frente == fila->tras;
}
int filaCheia(Fila* fila) {
    return (fila->tras + 1) % MAX == fila->frente;
}
int inserirCliente(Fila* fila, Cliente cliente) {
    if (filaCheia(fila)) {
        return 0; // Fila cheia
    }
    fila->clientes[fila->tras] = cliente;
    fila->tras = (fila->tras + 1) % MAX;
    return 1; // Sucesso
}
int atenderCliente(Fila* fila, Cliente* cliente) {
    if (filaVazia(fila)) {
        return 0; // Fila vazia
    }
    *cliente = fila->clientes[fila->frente];
    fila->frente = (fila->frente + 1) % MAX;
    return 1; // Sucesso
}
void mostrarFila(Fila* fila) {
    if (filaVazia(fila)) {
        printf("A fila esta vazia.\n");
        return;
    }
    printf("Fila atual:\n");
    int i = fila->frente;
    while (i != fila->tras) {
        printf("- %s\n", fila->clientes[i].nome);
        i = (i + 1) % MAX;
    }
}
int main() {
    Fila fila;
    inicializarFila(&fila);
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Inserir cliente na fila\n");
        printf("2. Atender proximo cliente\n");
        printf("3. Mostrar fila atual\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer do teclado
        if (opcao == 1) {
            Cliente cliente;
            printf("Digite o nome do cliente: ");
            fgets(cliente.nome, sizeof(cliente.nome), stdin);
            cliente.nome[strcspn(cliente.nome, "\n")] = 0; // Remover o '\n'
            if (inserirCliente(&fila, cliente)) {
                printf("Cliente inserido na fila.\n");
            } else {
                printf("Fila cheia! Nao foi possivel inserir o cliente.\n");
            }
        } else if (opcao == 2) {
            Cliente clienteAtendido;
            if (atenderCliente(&fila, &clienteAtendido)) {
                printf("Cliente atendido: %s\n", clienteAtendido.nome);
            } else {
                printf("Fila vazia! Nao ha clientes para atender.\n");
            }
        } else if (opcao == 3) {
            mostrarFila(&fila);
        }
    } while (opcao != 4);
    return 0;
}
