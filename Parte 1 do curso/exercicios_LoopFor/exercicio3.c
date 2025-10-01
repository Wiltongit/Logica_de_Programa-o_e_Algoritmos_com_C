#include <stdio.h> 

int main(){
    int i, calculo;
    printf("Digite um numero para a tabuada: ");
    scanf("%d", &i);
    
    for(int j = 1; j <= 10; j++){
       printf("%d x %d = %d\n", i , j, i * j); 
    }
    return 0;
}