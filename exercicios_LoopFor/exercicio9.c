#include <stdio.h>
int main(){
    int carros, ano, funciona;
    char modelo[30];
    printf("Quantos carros serão registrados: ");
    scanf("%d", &carros);
    for(int i = 1; i <= carros; i++){
        printf("\nQual o modelo do carro: ");
        scanf("%s", &modelo);
        printf("\nQual o ano de frabicação:");
        scanf("%d", &ano);
        printf("\nEstá funcionando normalmente?(1 para sim e 0 para não)");
        scanf("%d", &funciona);
        if(ano < 2005 && funciona == 0){
            printf("O carro %s precisa de REPAROS URGENTES", modelo);
        }else if(ano < 2005 && funciona == 1){
            printf("O carro %s é antigo, recomenda-se uma revisão!", modelo);
        }else if(ano >= 2005 && funciona == 0){
            printf("O carro %s precisa de manutenção!", modelo);
        }else printf("O carro %s está em boas condições!", modelo);
    }
    return 0;
}