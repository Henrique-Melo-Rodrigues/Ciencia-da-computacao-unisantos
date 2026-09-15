#include <stdio.h>

int soma(int a,int b);

int main(){
    int valorA, valorB;
    printf("Inserir os valores A e B (separados por espaco): ");
    scanf("%d %d", &valorA, &valorB);

    printf("A soma dos valores %d e %d eh %d\n",valorA, valorB, soma(valorA, valorB));


    return 0;
}

int soma(int a, int b){
    return a + b;  
}