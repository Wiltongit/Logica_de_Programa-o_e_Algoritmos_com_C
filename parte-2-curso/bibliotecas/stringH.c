#include <string.h>
#include <stdio.h>
/*strlen() - tamanho da string
strcpy() - copia uma string
strcmp() - compra strings
strcat() - concatena strings
*/
int main(){
    char idadeStr[] = "Joao";
    char sobrenome[] = " Silva";

    strcat(nome, sobrenome); // concatena
    printf("Nome completo: %s\n", nome);

    printf("Tamanho: %d\n", strlen(nome));

    if(strcmp(nome, "Joao Silva") == 0){
        printf("Nome correto!\n");
    }
    else{
        printf("Nome incorreto!\n");
    }

    return 0;
}