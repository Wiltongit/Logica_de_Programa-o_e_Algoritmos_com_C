#include <stdio.h> 
void notas(int nota){
    if(nota >= 6){
        printf("Aprovado!");
    }
    else if(nota >= 4 && nota < 6){
        printf("Recuperação. ");
    }
    else printf("Reprovado!");
}
int main(){
    int nota;
    printf("Qual foi sua nota? ");
    scanf("%d", &nota);
    notas(nota);
    return 0;
}