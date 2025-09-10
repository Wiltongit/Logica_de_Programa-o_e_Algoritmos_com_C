#include <stdio.h>

int main(){

    float minutos , horas;

    printf("Me fale as minutos: \n");
    scanf("%f", &minutos);

    horas = minutos / 60.0;

    printf("Convertido: %.2f horas\n", horas);


    return 0;
}