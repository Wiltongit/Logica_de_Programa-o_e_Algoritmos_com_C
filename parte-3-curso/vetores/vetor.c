#include <stdio.h>

int main(){
    int notas[5] = {10, 32, 9, 2, 3}; //vetor para armazenar 5 notas

    printf("Notas armazenadas no vetor:\n");
    for(int i = 0; i < 5; i++){
        printf("Nota %d: %d\n", i + 1, notas[i]);
    }

    return 0;
}