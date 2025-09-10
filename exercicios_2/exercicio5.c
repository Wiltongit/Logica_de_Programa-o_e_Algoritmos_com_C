#include <stdio.h>

//Cálculo de diferenca de salario
int main()
{
    float salario1, salario2, diferenca;

    printf("Qual o salario da primeira pessoa: ");
    scanf("%f", &salario1);

    printf("Qual o salario da segunda pessoa: ");
    scanf("%f", &salario2);

    diferenca = salario1 - salario2;

    
    printf("A diferenca de salario total: %.2f\n", diferenca);

    return 0;
}