#include <stdio.h>
#include <stdlib.h>>
#include <time.h>
/*-rand() - número aleatório
-srang() - inicializa o gerador com uma semente
-atoi(), atof() - converte string para int e float
-exit() - encerra o programa
*/
int main(){
    srand(time(NULL));
    int numero =  rand() %100; //entre 0 e 99
    printf("Numero aleatorio: %d\n", numero);
    return 0;
}