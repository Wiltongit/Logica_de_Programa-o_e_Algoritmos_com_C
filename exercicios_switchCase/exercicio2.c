#include <stdio.h> 
//Verificação de Nota e Frequência para Aprovação​
int main(){
    int nota, frequencia, opcao, resultadoF, resultadoFinal;
    printf("Escolha 1 opção: \n 1.Verificar se o aluno foi aprovado \n 2.Sair \n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("Me fale sua nota de 0 a 10: \n");
        scanf("%d", &nota );
        printf("Me fale a sua frequencia de 0 a 100: \n");
        scanf("%d", &frequencia);
        resultadoF = (frequencia / 100) * 100;
        if(nota >= 7 && frequencia >= 75){
            printf("Você foi aprovado! Parabens!");
        } else printf("Reprovado!");
        break;
        case 2:
        printf("Programa encerrando");
        break;
        default:
        printf("Opção invalida!");

    }
    return 0;
}