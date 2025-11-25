#include <stdio.h>

union Dados{
    int numero;
    float flutuante;
    char c;
};

int main(){
    union Dados d1;
    d1.numero = 10;
    printf("Número: %d", d1.numero);

    d1.flutuante = 3.14;
    
    printf("\nFlutuante: %.2f", d1.flutuante);

    return 0;
}