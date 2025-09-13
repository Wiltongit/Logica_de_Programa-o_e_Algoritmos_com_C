#include <stdio.h>

int main(){
    printf("Contagem regressiva para a bomba explodir:\n");

    for(int index = 10; index >= 1; index--){
        printf("%d...\n", index);
    }
    printf("## BOOM! ##\n");
    
    return 0;
}