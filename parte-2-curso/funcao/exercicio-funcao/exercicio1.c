#include <stdio.h>
//Media usando função
float media(float num1, float num2){
    float resultado = num1 + num2;
    return resultado / 2;
}
int main(){
    float resultado;
    float num1, num2;
    printf("Qual o primeiro número? ");
    scanf("%f", &num1);
    printf("Qual o segundo número? ");
    scanf("%f", &num2);
    resultado = media(num1, num2);
    printf("A média é: %.2f", resultado);

    return 0;
}