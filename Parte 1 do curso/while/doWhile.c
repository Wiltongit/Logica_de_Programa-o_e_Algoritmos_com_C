#include <stdio.h>
int main(){
    int senha;
    do{
        printf("Digite a senha correta:");
        scanf("%d", &senha);
    } while (senha != 1234);
    printf("Acesso liberado!\n");
    return 0;
}