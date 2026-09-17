#include <stdio.h>

void quadrado(int x){
    int quadradoX = x * x;
    printf("Quadrado: %d / Original: %d",x, quadradoX);
}

int main(){
    int valor;
    printf("Insira um numero: ");
    scanf("%d", &valor);
    quadrado(valor);


    return 0;
}