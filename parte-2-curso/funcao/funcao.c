#include <stdio.h>

int somar(int numero1, int numero2){
    return numero1 + numero2;
}
int main(){
    printf("O resultado é: %d\n", somar(3, 5));
    printf("O resultado é: %d\n", somar(3, 9));
    printf("O resultado é: %d\n", somar(3, 3));
    return 0;
}