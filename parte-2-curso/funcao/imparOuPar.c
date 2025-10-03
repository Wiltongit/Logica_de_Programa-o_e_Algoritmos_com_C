#include <stdio.h> 

int verificarParOuImpar(int num1){
    if(num1 % 2 == 0){
        return 1;
    }else {
        return 0;
    }
    
}

int main(){
    int num1;
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    if(verificarParOuImpar(num1)){
        printf("É par!");
    }else{
        printf("É impar!");
    }
}