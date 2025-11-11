#include <stdio.h>
#include <stdlib.h>
//Aloque dinamicamente um vetor de n floats (digitado pelo usuário), preencha-o com valores e calcule a média.

int main() {
    int n;
    float *vetor;
    float soma = 0.0, media;

    printf("Digite o tamanho do vetor de floats: ");
    scanf("%d", &n);

    vetor = (float *) malloc(n * sizeof(float));

    if(vetor == NULL){
        printf("Erro: memoria insuficiente.");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / n;

    printf("A media dos valores e: %.2f\n", media);

    free(vetor);
    return 0;
}
