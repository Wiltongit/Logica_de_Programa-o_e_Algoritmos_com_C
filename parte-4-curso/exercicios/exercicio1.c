#include <stdio.h>

//Crie uma função soma que recebe dois ponteiros para inteiros e retorna a soma dos valores apontados.
int soma(int *a, int *b) {
    return *a + *b;
}
int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    int resultado = soma(&num1, &num2);

    printf("A soma dos valores e: %d\n", resultado);

    return 0;
}