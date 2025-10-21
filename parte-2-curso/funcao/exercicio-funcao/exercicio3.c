#include <stdio.h>

void comparar(int num1, int num2, int num3) {
    
    if (num1 > num2 && num1 > num3) {
        printf("O primeiro número(%d) é o maior!!\n", num1);
    } 
    else if (num2 > num1 && num2 > num3) {
        printf("O segundo número(%d) é o maior!!\n", num2);
    } 
    else if (num3 > num1 && num3 > num2) {
        printf("O terceiro número(%d) é o maior!!\n", num3);
    } 
    else {
        printf("Não temos um único número maior (há um empate).\n");
    }
}


int main() {
    int num1, num2, num3;

    printf("Digite 3 números inteiros que gostaria de comparar: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    comparar(num1, num2, num3);

    return 0;
}