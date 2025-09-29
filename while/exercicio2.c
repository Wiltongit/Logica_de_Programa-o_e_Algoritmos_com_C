#include <stdio.h>
int main(){
    int secreto;
    do{
        printf("Adivinhe o numero secreto de 1 a 10: ");
        scanf("%d", &secreto);
    } while (secreto != 7);
    printf("Você acertou!\n");
    return 0;
}