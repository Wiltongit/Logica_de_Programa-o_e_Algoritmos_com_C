//Crie um programa que compare 5 scores com o recorde mundial e informe se o jogador bateu o recorde. Assuma que o recorde atual é igual a 5000. Caso o recorde seja quebrado, o recorde deverá ser atualizado.
#include <stdio.h>
int main() {
    int scores[5];
    int world_record = 5000;

    // Coletar os scores do jogador
    for (int i = 0; i < 5; i++) {
        printf("Digite o score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Comparar cada score com o recorde mundial
    for (int i = 0; i < 5; i++) {
        if (scores[i] > world_record) {
            printf("Score %d (%d) quebrou o recorde mundial de %d!\n", i + 1, scores[i], world_record);
            world_record = scores[i]; // Atualizar o recorde mundial
        } else {
            printf("Score %d (%d) nao quebrou o recorde mundial de %d.\n", i + 1, scores[i], world_record);
        }
    }

    printf("O recorde mundial final eh: %d\n", world_record);
    return 0;
}