#include <stdio.h>
int main(){
    int altura;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    for(int i = 1; i <= altura; i++){
        for(int j = 1; j <= altura - i;j++){
            printf(" ");
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}