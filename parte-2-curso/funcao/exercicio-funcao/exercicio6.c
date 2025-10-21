#include <stdio.h>
void criarQuadrado(int n, char caracter){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%c", caracter);
        }
        printf("\n");
    }
}
int main(){
    int n;
    char caracter;
    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &n);

    printf("Digite qual caracter voce quer: ");
    scanf(" %c", &caracter);
    criarQuadrado(n, caracter);
    return 0;
}