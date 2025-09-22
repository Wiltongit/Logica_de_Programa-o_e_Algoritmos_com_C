#include <stdio.h> 

int main(){
    int n, soma = 0;
    printf("DIgite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += i;
        
    }
    printf("A some de 1 ate %d e: %d", n, soma);
    return 0;
}