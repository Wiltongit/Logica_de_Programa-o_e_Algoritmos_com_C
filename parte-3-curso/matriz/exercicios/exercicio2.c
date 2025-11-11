#include <stdio.h>
//Registre as notas de 3 alunos em 4 provas. Depois, calcule e exiba a média de cada aluno.

int main(){
    float notas[3][4], media;
    for (int i = 0; i < 3; i++){//Alunos
        media = 0;
        for (int j = 0; j < 4; j++){//Provas
            printf("Digite a nota do aluno %d na prova %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
            media += notas[i][j];
        }
        media /= 4; //Calcula a média do aluno
        printf("Média do aluno %d: %.2f\n", i + 1, media);
    }
    return 0;
}