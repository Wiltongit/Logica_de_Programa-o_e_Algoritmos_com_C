#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// --- Definições e Constantes ---
#define MAX_LIVROS 100
#define MAX_USUARIOS 100
#define MAX_EMPRESTIMOS 100
#define TAM_STRING 100

// --- Estruturas ---
typedef struct {
    int codigo;
    char titulo[TAM_STRING];
    char autor[TAM_STRING];
    int qtdTotal;
    int qtdDisponivel;
} Livro;

typedef struct {
    int codigo;
    char nome[TAM_STRING];
    int idade;
} Usuario;

typedef struct {
    int codigoUsuario;
    int codigoLivro;
    int ativo; // 1 = Empréstimo ativo, 0 = Devolvido
} Emprestimo;

// --- Variáveis Globais (Banco de Dados em Memória) ---
Livro livros[MAX_LIVROS];
int totalLivros = 0;

Usuario usuarios[MAX_USUARIOS];
int totalUsuarios = 0;

Emprestimo emprestimos[MAX_EMPRESTIMOS];
int totalEmprestimos = 0;

// --- Funções Auxiliares ---

// Remove o \n que o fgets captura e limpa buffer se necessário
void limparString(char *s) {
    s[strcspn(s, "\n")] = 0;
}

// Limpa o buffer do teclado após um scanf
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Busca índice do livro pelo código
int buscarLivroIndex(int codigo) {
    for (int i = 0; i < totalLivros; i++) {
        if (livros[i].codigo == codigo) return i;
    }
    return -1;
}

// Busca índice do usuário pelo código
int buscarUsuarioIndex(int codigo) {
    for (int i = 0; i < totalUsuarios; i++) {
        if (usuarios[i].codigo == codigo) return i;
    }
    return -1;
}

// --- Funções de Arquivo (Persistência) ---

void salvarDados() {
    FILE *f;

    // Salvar Livros
    f = fopen("livros.txt", "w");
    if (f) {
        fprintf(f, "%d\n", totalLivros);
        for (int i = 0; i < totalLivros; i++) {
            fprintf(f, "%d\n%s\n%s\n%d\n%d\n", 
                livros[i].codigo, livros[i].titulo, livros[i].autor, 
                livros[i].qtdTotal, livros[i].qtdDisponivel);
        }
        fclose(f);
    }

    // Salvar Usuários
    f = fopen("usuarios.txt", "w");
    if (f) {
        fprintf(f, "%d\n", totalUsuarios);
        for (int i = 0; i < totalUsuarios; i++) {
            fprintf(f, "%d\n%s\n%d\n", 
                usuarios[i].codigo, usuarios[i].nome, usuarios[i].idade);
        }
        fclose(f);
    }

    // Salvar Empréstimos
    f = fopen("emprestimos.txt", "w");
    if (f) {
        fprintf(f, "%d\n", totalEmprestimos);
        for (int i = 0; i < totalEmprestimos; i++) {
            fprintf(f, "%d\n%d\n%d\n", 
                emprestimos[i].codigoUsuario, emprestimos[i].codigoLivro, emprestimos[i].ativo);
        }
        fclose(f);
    }
    printf("\n[i] Dados salvos com sucesso!\n");
}

void carregarDados() {
    FILE *f;

    // Carregar Livros
    f = fopen("livros.txt", "r");
    if (f) {
        fscanf(f, "%d", &totalLivros);
        fgetc(f); // Consumir quebra de linha
        for (int i = 0; i < totalLivros; i++) {
            fscanf(f, "%d", &livros[i].codigo);
            fgetc(f);
            fgets(livros[i].titulo, TAM_STRING, f); limparString(livros[i].titulo);
            fgets(livros[i].autor, TAM_STRING, f); limparString(livros[i].autor);
            fscanf(f, "%d", &livros[i].qtdTotal);
            fscanf(f, "%d", &livros[i].qtdDisponivel);
            fgetc(f);
        }
        fclose(f);
    }

    // Carregar Usuários
    f = fopen("usuarios.txt", "r");
    if (f) {
        fscanf(f, "%d", &totalUsuarios);
        fgetc(f);
        for (int i = 0; i < totalUsuarios; i++) {
            fscanf(f, "%d", &usuarios[i].codigo);
            fgetc(f);
            fgets(usuarios[i].nome, TAM_STRING, f); limparString(usuarios[i].nome);
            fscanf(f, "%d", &usuarios[i].idade);
            fgetc(f);
        }
        fclose(f);
    }

    // Carregar Empréstimos
    f = fopen("emprestimos.txt", "r");
    if (f) {
        fscanf(f, "%d", &totalEmprestimos);
        for (int i = 0; i < totalEmprestimos; i++) {
            fscanf(f, "%d", &emprestimos[i].codigoUsuario);
            fscanf(f, "%d", &emprestimos[i].codigoLivro);
            fscanf(f, "%d", &emprestimos[i].ativo);
        }
        fclose(f);
    }
    printf("\n[i] Dados carregados do sistema.\n");
}

// --- Funções Principais ---

void cadastrarLivro() {
    if (totalLivros >= MAX_LIVROS) {
        printf("Limite de livros atingido!\n");
        return;
    }
    Livro l;
    printf("\n--- Novo Livro ---\n");
    printf("Código (ID): ");
    scanf("%d", &l.codigo);
    limparBuffer();
    
    printf("Título: ");
    fgets(l.titulo, TAM_STRING, stdin);
    limparString(l.titulo);
    
    printf("Autor: ");
    fgets(l.autor, TAM_STRING, stdin);
    limparString(l.autor);
    
    printf("Quantidade Total: ");
    scanf("%d", &l.qtdTotal);
    l.qtdDisponivel = l.qtdTotal; // Inicialmente, todos disponíveis

    livros[totalLivros] = l;
    totalLivros++;
    printf("Livro cadastrado com sucesso!\n");
}

void cadastrarUsuario() {
    if (totalUsuarios >= MAX_USUARIOS) {
        printf("Limite de usuários atingido!\n");
        return;
    }
    Usuario u;
    printf("\n--- Novo Usuário ---\n");
    printf("Código (ID): ");
    scanf("%d", &u.codigo);
    limparBuffer();
    
    printf("Nome Completo: ");
    fgets(u.nome, TAM_STRING, stdin);
    limparString(u.nome);
    
    printf("Idade: ");
    scanf("%d", &u.idade);

    usuarios[totalUsuarios] = u;
    totalUsuarios++;
    printf("Usuário cadastrado com sucesso!\n");
}

void realizarEmprestimo() {
    int idUser, idLivro;
    printf("\n--- Realizar Empréstimo ---\n");
    printf("Código do Usuário: ");
    scanf("%d", &idUser);
    printf("Código do Livro: ");
    scanf("%d", &idLivro);

    int idxU = buscarUsuarioIndex(idUser);
    int idxL = buscarLivroIndex(idLivro);

    if (idxU == -1) {
        printf("Erro: Usuário não encontrado.\n");
        return;
    }
    if (idxL == -1) {
        printf("Erro: Livro não encontrado.\n");
        return;
    }
    if (livros[idxL].qtdDisponivel <= 0) {
        printf("Erro: Livro indisponível no momento.\n");
        return;
    }

    // Registrar empréstimo
    emprestimos[totalEmprestimos].codigoUsuario = idUser;
    emprestimos[totalEmprestimos].codigoLivro = idLivro;
    emprestimos[totalEmprestimos].ativo = 1; // Ativo
    totalEmprestimos++;

    // Atualizar estoque
    livros[idxL].qtdDisponivel--;
    printf("Empréstimo realizado para %s: Livro '%s'.\n", usuarios[idxU].nome, livros[idxL].titulo);
}

void devolverLivro() {
    int idUser, idLivro;
    printf("\n--- Devolução de Livro ---\n");
    printf("Código do Usuário: ");
    scanf("%d", &idUser);
    printf("Código do Livro: ");
    scanf("%d", &idLivro);

    // Buscar empréstimo ativo
    int found = 0;
    for (int i = 0; i < totalEmprestimos; i++) {
        if (emprestimos[i].codigoUsuario == idUser && 
            emprestimos[i].codigoLivro == idLivro && 
            emprestimos[i].ativo == 1) {
            
            emprestimos[i].ativo = 0; // Marcar como devolvido
            found = 1;
            
            // Devolver ao estoque
            int idxL = buscarLivroIndex(idLivro);
            if (idxL != -1) {
                livros[idxL].qtdDisponivel++;
            }
            printf("Devolução registrada com sucesso!\n");
            break;
        }
    }

    if (!found) {
        printf("Erro: Nenhum empréstimo ativo encontrado para este usuário e livro.\n");
    }
}

// --- Funções de Exibição ---

void listarLivros() {
    printf("\n--- Lista de Livros ---\n");
    printf("ID\tDisp.\tTítulo (Autor)\n");
    for (int i = 0; i < totalLivros; i++) {
        printf("%d\t%d/%d\t%s (%s)\n", 
            livros[i].codigo, 
            livros[i].qtdDisponivel, livros[i].qtdTotal, 
            livros[i].titulo, livros[i].autor);
    }
}

void listarUsuarios() {
    printf("\n--- Lista de Usuários ---\n");
    for (int i = 0; i < totalUsuarios; i++) {
        printf("ID: %d | Nome: %s | Idade: %d\n", 
            usuarios[i].codigo, usuarios[i].nome, usuarios[i].idade);
    }
}

void listarEmprestimos() {
    printf("\n--- Empréstimos Ativos ---\n");
    int ativos = 0;
    for (int i = 0; i < totalEmprestimos; i++) {
        if (emprestimos[i].ativo) {
            // Busca nomes para exibição amigável
            int idxU = buscarUsuarioIndex(emprestimos[i].codigoUsuario);
            int idxL = buscarLivroIndex(emprestimos[i].codigoLivro);
            
            char *nomeUser = (idxU != -1) ? usuarios[idxU].nome : "Desconhecido";
            char *nomeLivro = (idxL != -1) ? livros[idxL].titulo : "Desconhecido";

            printf("Usuário: %s | Livro: %s\n", nomeUser, nomeLivro);
            ativos++;
        }
    }
    if (ativos == 0) printf("Nenhum empréstimo ativo no momento.\n");
}

// --- Main ---

int main() {
    setlocale(LC_ALL, "Portuguese");
    carregarDados();
    int opcao;

    do {
        printf("\n=== BIBLIOTECA ESCOLAR ===\n");
        printf("1. Cadastrar Livro\n");
        printf("2. Listar Livros\n");
        printf("3. Cadastrar Usuário\n");
        printf("4. Listar Usuários\n");
        printf("5. Realizar Empréstimo\n");
        printf("6. Realizar Devolução\n");
        printf("7. Listar Empréstimos Ativos\n");
        printf("0. Sair e Salvar\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        limparBuffer(); // Consumir o enter

        switch(opcao) {
            case 1: cadastrarLivro(); break;
            case 2: listarLivros(); break;
            case 3: cadastrarUsuario(); break;
            case 4: listarUsuarios(); break;
            case 5: realizarEmprestimo(); break;
            case 6: devolverLivro(); break;
            case 7: listarEmprestimos(); break;
            case 0: salvarDados(); printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}