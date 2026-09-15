#include <stdio.h>

void troca(int *, int *);

int main(){
    int a = 10;
    int b = a + 5;

    printf("Valores de A e B antes da troca: %d e %d\n", a, b);
    troca(&a, &b);

    /*
    Perguntas: por que é preciso passar os endereços (&a, &b)? O que aconteceria
    se a e b fossem passados por valor?
    
    R: Eh necessario passar os enderecos das variaivels por que o a passagem por
    referencia (ponteiros em funcoes) pode alterar o valor original da variavel no escopo  
    main. se fosse passado por valores, a funcao iria gerar uma copia local das variaveis
    que estao na main e esses valores seriam removidos da pilha logo apos terem a sua funcao 
    executada, nao alterando por definitivo os valores originais das variaveis a e b
    */

    printf("Valores de A e B depois da troca: %d e %d\n", a, b);


    return 0;

}

void troca(int *pa,int *pb){
    int aux = *pa;
    *pa = *pb;
    *pb = aux;
    
}